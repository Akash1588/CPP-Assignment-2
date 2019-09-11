#include"Stack.h"

int main()
{
	Stack<int> s;
	try
	{
	s.Push(11);
	s.Push(22);
	s.Push(33);
	s.Push(44);
	s.Push(55);
	s.Push(66);
	s.Push(77);
	}
	catch (runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	try
	{
		cout<<s.Pop()<<endl;
		cout<<s.Pop()<<endl;
		cout<<s.Pop()<<endl;
		cout<<s.Pop()<<endl;
		//cout<<s.Pop()<<endl;
		//cout<<s.Pop()<<endl;
		//cout<<s.Pop()<<endl;
	}
	catch (runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	try
	{
		cout<<"\n"<<s.Peep();
	}
	catch (runtime_error e)
	{
		cout<<e.what();
	}
	return 0;
}
