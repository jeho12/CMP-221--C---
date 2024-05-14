// program to pass array to functions with addition of numbers
#include<iostream>
using namespace std;
int i,j, total=0;	

// function to input marks for students
int input_mark(int marks[2][3])
{
	for(i=0; i<2; i++)
{
		for (j=0; j<3; j++)
	{
		cout<<"input sore "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
		cin>>marks[i][j];
	}
	
}

}

// function to display students marks 

int display_mark(int marks[2][3])
{
	cout<<endl;
	for (i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"score"<<"["<<i<<"]"<<"["<<j<<"]"<<" = "<<marks[i][j]<<endl;
		}
	
	}
}
int calculate(int marks[2][3])
{
	for (i=0; i<2; i++)
	{
		for (j=0; i<3; j++)
		{
			total+=marks[i][j];
		}
	}
	cout<<endl;
	cout<<"total is "<<total<<endl;
	cout<<"Average is "<<total/5;
}


int main()
{
	int mark[2][3];
	input_mark(mark);
	display_mark(mark);
	calculate(mark);
	
	
	return 0;
}
