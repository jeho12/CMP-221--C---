// addition of numbers using functions
#include<iostream>
using namespace std;

int add(int a, int b); //function prototype
int sub(int a, int b); //function prototype
int multi(int a, int b); //function prototype
int div(int a, int b); //function prototype
int mod(int a, int b); //function prototype

int main()
{
	int num1, num2, sum;
	cout<<"Enter number 1: ";
	cin>>num1;
	
	cout<<"Enter number 2: ";
	cin>>num2;
	
	sum = add(num1, num2); // function call (add)
	cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<add(num1, num2)<<endl;
	cout<<"The difference between "<<num1<<" and "<<num2<<" is "<<sub(num1, num2)<<endl;
	cout<<"The  of "<<num1<<" and "<<num2<<" is "<<multi(num1, num2)<<endl;
	cout<<"The division of "<<num1<<" and "<<num2<<" is "<<divi(num1, num2)<<endl;
	cout<<"The modulos of "<<num1<<" and "<<num2<<" is "<<modu(num1, num2);
	
	
	return	0;
}
// function definition
int add(int a, int b)
{
	int result ;
	
	result = a+b;
	return result; // result will be automatiacally saved in sum
}

int sub(int a, int b)
{
	int result;
	
	result = a-b;
	return result;
}

int multi(int a, int b)
{
	int result;
	
	result = a*b;
	return result;
}

int div(int a, int b)
{
	int result;
	
	result = a/b;
	return result;
}

int mod(int a, int b)
{
	int result;
	
	result = a % b;
	return result;
}
