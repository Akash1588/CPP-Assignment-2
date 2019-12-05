#include<iostream>
#include<stdexcept>
using namespace std;
#define SIZE 5
template<class T>
class CQueue
{
	private:
		int rear;
		int front;
		T arr[SIZE];
	public:
		CQueue();
		~CQueue();
		bool IsFull();
		bool IsEmpty();
		void Enque(T);
		T Deque();
};
