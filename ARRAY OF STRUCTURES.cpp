// Array of Structures
#include<iostream>
using namespace std;

struct Student
{
	char name[60];
	int roll_No;
	int contact;
};

int i;
int main ()
{
	struct Student std[4]; // Created an Array of Structure which will hold 4 sets of values
	
	for(i=0; i<4; i++)
	{
		cout<<"Student"<<i+1<<endl;
		cout<<"Enter Student Name: ";
		cin>>std[i].name;
		cout<<"Enter Roll No: ";
		cin>>std[i].roll_No;
		
		cout<<"Enter Contact No: ";
		cin>>std[i].contact;
	}
	
	cout<<"\n Display Student Information-"<<endl;
	for(i=0; i<4; i++)
	{
		cout<<"Student Name: "<<std[i].name<<endl;
		cout<<"Roll Number: "<<std[i].roll_No<<endl;
		cout<<"Contact No: "<<std[i].contact<<endl;
	}
	return 0;
}
