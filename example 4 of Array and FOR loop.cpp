//program to find the average of marks inputed 
// this is simple dimensionla array

#include <iostream>
using namespace std;

int main()
{
	int mark[6],i, total=0;
	float avg;
	//input the marks
	cout<<"Enter your Marks Here: "<<endl;
	for (i=0; i<6; ++i)
	{
		cout<<"Enter mark: " <<i+1<<" ";
		cin>>mark[i];
		
		//total = total+mark{i}
		total+=mark[i]; 
	}
	
	avg = total/6;
	cout<<"The total marks inputed is "<<total<<"\n";
	cout<<"The average is "<<avg;
	
	
	return 0;
	
}
