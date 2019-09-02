#include"stringCmp.h"
using namespace std;
Student::Student():name("\0"),course("\0")
{
	cout<<"\nDefault Ctor";
}

Student::Student(string n, string c):name(n),course(c)
{
	cout<<"\nParameterized Ctor";
}

void Student::Accept()
{
	cout<<"\nEnter name : ";
	getline(cin,name);
	cout<<"\nEnter course : ";
	getline(cin,course);
}

void Student::Display()
{
	cout<<"\nName is : "<<name;
	cout<<"\nCourse is : "<<course;
}

void Student::operator==(Student s2)
{
	if(this->name==s2.name)
		cout<<"\nString are equal";
	else
		cout<<"\nString are not equal";	
}
