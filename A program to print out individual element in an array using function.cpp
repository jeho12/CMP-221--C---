// A program to print out individual element in an array using function
#include<iostream>
using namespace std;
//function definition
int display_age(int age1, int age2, int age3)
{
	cout<<"age_array[1]= " <<age1<<endl;
	cout<<"age_array[2]= " <<age2<<endl;
	cout<<"age_array[3]= " <<age3;
	
}

//function call
int main()
{
	int age_array[]={10,20,24,17};
	display_age(age_array[1],age_array[2],age_array[3]);
	
	return 0;		
}
