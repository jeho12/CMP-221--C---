// passing structure to function
#include<iostream>

using namespace std;

struct Employee{
	char name [60];
	int age;
	float salary;
};

void displayData(Employee);

int main()
{
	Employee a;
	cout<<"Enter your full name: ";
	cin.get(a.name,60);
	cout<<"Age: ";
	cin>>a.age;
	cout<<"salary: ";
	cin>>a.salary;
	displayData(a);
	
	return 0;
}

void displayData(Employee a)
{
	cout<<"\nDisplaying the employee's Information."<<endl;
	cout<<"Name: "<<a.name<<endl;
	cout<<"Age: "<<a.age<<endl;
	cout<<"Salary: "<<a.salary<<endl;
}
