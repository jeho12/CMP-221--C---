// program to create structure to store studens details
#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct student_details
{
	//structure definition
	string full_name;
	string matric_no;
	int age;
	string gender;
};

int main()
{
	student_details std1,std2,std3;
	
	// input first student details 
	cout<<"Enter Student 1 name: ";
	getline(cin, std1.full_name);
	//cin>>std1.full_name;
	cout<<"Enter Student 1 Matric no: ";
	cin>>std1.matric_no;
	cout<<"Enter Student 1 age: ";
	cin>>std1.age;
	cout<<"Enter Student 1 gender: ";
	cin>>std1.gender;
	
	// input second student details 
	cout<<"Enter Student 2 name: ";
	cin>>std2.full_name;
	cout<<"Enter Student 2 Matric no: ";
	cin>>std2.matric_no;
	cout<<"Enter Student 2 age: ";
	cin>>std2.age;
	cout<<"Enter Student 2 gender: ";
	cin>>std2.gender;
	
	// input third student details 
	cout<<"Enter Student 3 name: ";
	cin>>std3.full_name;
	cout<<"Enter Student 3 matric no: ";
	cin>>std3.matric_no;
	cout<<"Enter Student 3 age: ";
	cin>>std3.age;
	cout<<"Enter Student 3 gender: ";
	cin>>std3.gender;
	
	system("cls");
	// Display students details 
	cout<<"Student 1 Details: "<<"\n";
	cout<<"Name: "<<std1.full_name<<endl;
	cout<<"Matric no: "<<std1.matric_no<<endl;
	cout<<"Age: "<<std1.age<<endl;
	cout<<"Gender: "<<std1.gender<<endl;
	
	cout<<"Student 2 Details: "<<"\n";
	cout<<"Name: "<<std2.full_name<<endl;
	cout<<"Matric no: "<<std2.matric_no<<endl;
	cout<<"Age: "<<std2.age<<endl;
	cout<<"Gender: "<<std2.gender<<endl;
	
	
	cout<<"Student 3 Details: "<<"\n";
	cout<<"Name: "<<std3.full_name<<endl;
	cout<<"Matric no: "<<std3.matric_no<<endl;
	cout<<"Age: "<<std3.age<<endl;
	cout<<"Gender: "<<std3.gender<<endl;
	
	return 0;
	
}
