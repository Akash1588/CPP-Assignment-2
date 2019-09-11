#include"Stack.h"

template<class T>
Stack<T>::Stack():tos(-1)
{ }

template<class T>
bool Stack<T>::IsEmpty()
{
	return (tos == -1);
}

template<class T>
bool Stack<T>::IsFull()
{
	if (SIZE-1 == tos)
		return true;
	else 
		return false;
		
}

template<class T>
void Stack<T>::Push(T ele)
{
	if(IsFull())
	{
		throw runtime_error("\nStack OverFlow!!!");
	}
	else
	{	//cout<<tos<<endl;
		tos = tos+1;
		arr[tos] = ele;
		//cout<<tos<<endl;
	}
}

template<class T>
T Stack<T>::Pop()
{
	if(IsEmpty())
	{
		throw runtime_error("\nStack Underflow!!!");
	}
	else
	{
	T ele = arr[tos];
	tos -= 1;
	
	return ele;
}}

template<class T>
T Stack<T>::Peep()
{
	if(IsEmpty())
	{
		throw runtime_error("\nStack Underflow!!!");
	}
	T ele = arr[tos];
	return ele;
}
template class Stack<int>;

