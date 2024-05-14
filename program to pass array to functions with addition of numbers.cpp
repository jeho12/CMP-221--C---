// program to pass array to functions with addition of numbers
#include<iostream>
using namespace std;
int i;

// function to input marks for students
int input_mark(int marks[])
{
	for (i=0; i<5; i++)
	{
		cin>>marks[i];
	}
}

// function to display students marks 

int display_mark(int marks[])
{
	for (i=0; i<5; i++)
	{
		cout<<marks[i];
	}
}


int main()
{
	int mark[5];
	input_mark(mark);
	display_mark(mark);
	
	return 0;
}
