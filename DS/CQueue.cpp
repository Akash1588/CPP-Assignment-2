#include"CQueue.h"

template<class T>
CQueue<T>::CQueue():front(0),rear(0)
{}

template<class T>
CQueue<T>::~CQueue()
{}

template<class T>
bool CQueue<T>::IsEmpty()
{
	return (front == rear);
}

template<class T>
bool CQueue<T>::IsFull()
{
	return (rear == SIZE-1);
}

template<class T>
void CQueue<T>::Enque(T ele)
{
	if(IsFull())
	{
		throw runtime_error("\n Queue is Full");
	}
	rear = (rear+1) % SIZE;
	arr[rear] = ele;
}

template<class T>
T CQueue<T>::Deque()
{
	if(IsEmpty())
	{
		throw runtime_error("\n Queue is Empty");
	}
	front = (front+1) % SIZE;
	T ele = arr[front];
	return ele;
}

template class CQueue<int>;

