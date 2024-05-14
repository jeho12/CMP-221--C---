//program to find the highest and lowest mark from 1-6 in an array

#include <iostream>
using namespace std;

int main()
{
	int mark[6],i, total=0, max,min;
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
	cout<<"The total marks inputed is "<<total<<endl;
	cout<<"The average mark is "<<avg<<endl;
	
	max=mark[0];
	for(i=0; i<6; ++i)
	{
		if(max<mark[i])
		{
			max=mark[i];
		}
		
	}
	min=mark[0];
	for(i=0; i<6; ++i)
	{
		if(min>mark[i])
		{
			min=mark[i];
		}
		
	}
	cout<<"The Maximum number "<<max<<endl;
	cout<<"The minimum number "<<min;
	
	return 0;
	
}
