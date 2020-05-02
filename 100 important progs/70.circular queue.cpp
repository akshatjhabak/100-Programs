//circular queue
#include<iostream>
using namespace std;
#define Max 10
class Queue
{
	public:
		int item,a[Max],i,front,rear,n;
		Queue()
		{
			front=0;
			rear=0;
			n=0;
		}
		void enqueue();
		void dequeue();
		void traverse();
		void decide();
};

void Queue::enqueue()
{
	if(n==Max)
	cout<<"Overflow"<<endl;
	else
	{
		cout<<"Enter item to enqueue in circular queue"<<endl;
	cin>>item;
	a[rear]=item;
	rear=(rear+1)%Max;
	n++;
	}
}
void Queue::dequeue()
{
	if(n==0)
	cout<<"Underflow";
	else
	{
		n--;
	traverse();
	}
}
void Queue::traverse()
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void Queue::decide()
{   int i;
	cout<<"Press 1 for enqueue and 2 for deque and 3 for traverse.";
	cin>>i;
	if(i==1)
	{
		enqueue();
		decide();
	}
	else if(i==2)
	{
		dequeue();
		decide();
	}
	else
	 {
	traverse();
decide();
	} 
}
main()
{
	Queue q;
	q.decide();
}


