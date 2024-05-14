// member function in C++ structures
#include<iostream>

using namespace std;

struct Person{
	string first_name;
	string last_name;
	int age;
	float salary;
	
	// member function to display information about the person
void display_info()
{
	cout<<"FirstName: "<<first_name<<endl;
	cout<<"LastName: "<<last_name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Salary: "<<salary<<endl;
}
};

