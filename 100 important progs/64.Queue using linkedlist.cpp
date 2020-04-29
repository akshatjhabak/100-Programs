//queue using linked list
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *nextnode;
}*start=NULL,*end=NULL,*temp,*newnode;
class Queue
{
	int n;
	public:
		Queue()
		{
		   n=0;
	    }
		void getnode();
		void traverse();
		void isempty();
		void enqueue();
		void dequeue();
};
void Queue::getnode()
{
	newnode=new Node;
	cout<<"Enter the item\n";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void Queue::traverse()
{
	temp=start;
	cout<<"\nCurrent queue items:-\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->nextnode;
	}
}
void Queue::isempty()
{
	getnode();
	start=newnode;
	end=newnode;
	n++;
	traverse();
}
void Queue::enqueue()
{
	if(n==0)
	isempty();
	else
	{
		getnode();
		end->nextnode=newnode;
		end=newnode;
		n++;
		traverse();
	}
}
void Queue::dequeue()
{
	temp=start;
	if(temp->nextnode==NULL)
	{
		start=NULL;
		end=NULL;
		n--;
		cout<<"Queue is empty now";
	}
	else
	{
	    start=start->nextnode;
	    n--;
	    traverse();
	}
}
main()
{
	Queue obj;
	int ch,e;
	do
	{
		cout<<"\n";
		cout<<"Press 1 to enqueue\n";
		cout<<"Press 2 to dequeue\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:obj.enqueue();
			break;
			case 2:obj.dequeue();
			break;
			default:cout<<"Invalid Choice\n";
			break;
		}
		cout<<"\nPress 0 to exit and any other num to continue...\n";
		cin>>e;
	}while(e!=0);
}
