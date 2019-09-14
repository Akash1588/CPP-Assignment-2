#include"CQueue.h"

int main()
{
	CQueue<int> cq;
	int ch=0,d;
	while(ch!= 5)
	{
	cout<<"\n----------------MENU-----------------";
	cout<<"\n 1. Enter data in Queue ";
	cout<<"\n 2. Delete data from Queue ";
	cout<<"\n 3. Check for Full ";
	cout<<"\n 4. Check for Empty ";
	cout<<"\n 5. Exit ";
	cout<<"\n Enter your Choice :";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				cout<<"\n Enter data in queue : ";
				cin>>d;
				try
				{
					cq.Enque(d);
				}
				catch(runtime_error e)
				{
					cout<<e.what();
				}
			}
			break;
		case 2:
			{
				try
				{
					cout<<"\n Data "<<cq.Deque()<<"is deleted ";
				}
				catch(runtime_error e)
				{
					cout<<e.what();
				}
			}
			break;
		case 3:
			{
				if(cq.IsFull())
					cout<<"\n Queue is Full..!!!";
				else
					cout<<"\n Queue is not Full..!!!";
			}
			break;
		case 4:
			{
				if(cq.IsEmpty())
					cout<<"\n Queue is Empty..!!!";
				else
					cout<<"\n Queue is not Empty..!!!";
			}
			break;
		case 5:
			break;
		default : 
			 cout<<"\n Invalid Choice...!!!!!";
	}}
	return 0;
}
