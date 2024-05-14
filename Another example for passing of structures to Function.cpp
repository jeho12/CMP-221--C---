#include<iostream>
using namespace std;

struct Employee {
	char name[60];
	int Age;
	float Salary;
};

Employee getData(Employee);  // Employee here is a Data type 
void displayData(Employee);

int main()
// here we have our structure variables 
{
	Employee a,temp;
	temp= getData(a); // stores getData a{function call} a in Temp
	a = temp; // temp now saves into variable a
	displayData(a);
	
	return 0;
}

Employee getData(Employee a)
{
	cout<<"Enter your full name: ";
	cin.get(a.name, 60);
	
	cout<<"Age: ";
	cin>>a.Age;
	cout<<"Salary: ";
	cin>>a.Salary;
	
	return a;
}

void displayData(Employee a)
{
	cout<<"\n Displaying the Employee's Information: " <<endl;
	cout<<"Name: " <<a.name<<endl;
	cout<<"Age: " <<a.Age<<endl;
	cout<<"Salary: " <<a.Salary;
}
