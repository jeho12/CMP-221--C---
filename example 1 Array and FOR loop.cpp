// Program to display array elements
// 'i' in this for loop represent "INDEX"

#include <iostream>
using namespace std;

int main()
{
	int numbers[5]={7,5,6,12,35};
	cout<<"the numbers are: ";
	
	//printing array elements
	for(int i=0;i<5;++i)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}
