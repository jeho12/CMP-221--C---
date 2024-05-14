// program to pass array to functions
#include<iostream>
using namespace std;

int display_age(int age[])
{
	int i;
	for (i=0; i<4; i++)
	{
		cout<<"age["<<i<<"]= "<<age[i]<<endl;
	}
}
int main()
{
	int age_array[]={10,30,40,53}; 
	int i;
	display_age(age_array);
	
	return 0;
}
