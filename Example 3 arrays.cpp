#include <iostream>
using namespace std;

int main()
{
	int mark[6],i;
	
	//input marks
	cout<<"Enter your Marks Here: "<<endl;
	for (i=0; i<6; ++i)
	{
		cout<<"Enter mark: " <<i+1<<" ";
		cin>>mark[i];
	}
	
	//output marks
	for (i=0; i<6; ++i)
	{
		cout<<"mark["<<i<<"] = "<<mark[i]<<endl;
	}
	
	return 0;
}
