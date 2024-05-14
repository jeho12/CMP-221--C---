// program to store and print out values in a 2d array
#include <iostream>
using namespace std;

int main()
{
	int values[3][2], i,j;
	
	//store values in the array
	for(i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			cout<<"Enter the Element in Values["<<i<<"]["<<j<<"]=";
			cin>>values[i][j];
		}
	} 
	
	cout<<endl;
	// print out the element inputed 
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for (j=0;j<2;j++)
		{
			cout<<values[i][j]<<"\t";
			//cout<<"values["<<i<<"]["<<j<<"]="<<values[i][j]<<endl;
			//cout<<"Enter the Element in Values["<<i<<"]["<<j<<"]=";
		}
	} 
return 0;
}
