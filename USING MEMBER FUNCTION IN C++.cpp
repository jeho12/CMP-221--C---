// member function in C++ structures
#include<iostream>
using namespace std;

struct Person{
	string first_name;
	string last_name;
	int age;
	int salary;
	
	// member function to display information about the person
void display_info()
 {
	cout<<"FirstName: "<<first_name<<endl;
	cout<<"LastName: "<<last_name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Salary: "<<salary<<endl;
 }
};

int main()
{
	Person p1;
	
	cout<<"Enter first name: ";
	cin>>p1.first_name;
	cout<<"Enter Last name: ";
	cin>>p1.last_name;
	cout<<"Enter Age: ";
	cin>>p1.age;
	cout<<"Enter salary: ";
	cin>>p1.salary;
	
	// Display Information using member function 
	cout<<"\nDisplaying Information."<<endl;p1.display_info();
	
	return 0;
}


