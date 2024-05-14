// program to input scores for test and exams and then output the total code

#include <iostream>
using namespace std;

int main()
{
	int test[2][3], exam[2][3], total[2][3];
	int i,j;
	
	// input test scores
	for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"Test scores["<<i<<"]["<<j<<"]=";
			cin>>test[i][j];
		}
	} 
	cout<<endl;
	
	// input exam scores
	for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"Enter Exam scores["<<i<<"]["<<j<<"]=";
			cin>>exam[i][j];
		}
	} 
	cout<<endl;
	
	//calculate for total
		for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			total[i][j]= test[i][j] + exam[i][j];
		}
	} 
	
	//print out total scores
	
		for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"total["<<i<<"]["<<j<<"]="<<total[i][j]<<endl;
		}
	} 
return 0;
}

