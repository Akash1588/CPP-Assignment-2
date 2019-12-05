#include<iostream>
#include<stdexcept>
#define SIZE 5
using namespace std;

template<class T>
class Stack
{
	private:
		int tos;
		T arr[SIZE];
	public:
		Stack();
		void Push(T);
		T Pop();
		T Peep();
		bool IsEmpty();
		bool IsFull();
};
