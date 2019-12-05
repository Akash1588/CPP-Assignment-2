#include<iostream>
#include<string>
using namespace std;

class Student
{
	private:
		string name;
		string course;
	public:
		Student();
		Student(string,string);
		void Accept();
		void Display();
		void operator==(Student);
};
