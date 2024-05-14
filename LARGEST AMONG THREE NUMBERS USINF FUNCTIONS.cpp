// finding the largest amongst three numbers using functions

#include<iostream>
using namespace std;

int largest(int x, int y, int z);
int main()
{
	int num1, num2, num3, max;
	
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	cout<<"Enter number 3: ";
	cin>>num3;
	
	max = largest(num1, num2, num3); // function call
	cout<<"The Largest number is"<<max;
	
	return 0;
}
int largest(int x, int y, int z)
{
	if (x>y && x>z)
     	{
		return x;
		}
		
		else if(y>x && y>z)
		{
			return y;
		}
		
		else 
		return z;
}

