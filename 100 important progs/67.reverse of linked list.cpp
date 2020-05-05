//reversing a linked list
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
}*start=NULL,*end=NULL,*newnode,*temp1,*temp2;
class Linklist
{
	int n;
	public:
		void getnode();
		void isempty();
		void traverse();
		void getlinklist();
		void reverse();
};
void Linklist::getnode()
{
	newnode=new node;
	cout<<"Enter the item\n";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void Linklist::isempty()
{
	cout<<"Enter the number of linked elements\n";
	cin>>n;
	cout<<"Enter the elements one by one\n";
	getnode();
	start=newnode;
	end=newnode;
}
void Linklist::traverse()
{
	temp1=start;
	cout<<"linked list items are:-\n";
	while(temp1!=NULL)
	{
		cout<<temp1->data<<"\t";
		temp1=temp1->nextnode;
	}
}
void Linklist::getlinklist()
{
	isempty();
	for(int i=2;i<=n;i++)
	{
		getnode();
		end->nextnode=newnode;
		end=newnode;
	}
	cout<<"Before reversing ";
	traverse();
}
void Linklist::reverse()
{
	cout<<"\nAfter reversing ";
	end=start;
	temp2=start;
	start=start->nextnode;
	for(int i=2;i<n;i++)
	{
		temp1=start;
		start=start->nextnode;
	    temp1->nextnode=temp2;
	    temp2=temp1;
	}
	start->nextnode=temp2;
	end->nextnode=NULL;
	traverse();
}
main()
{
	Linklist obj;
	obj.getlinklist();
	obj.reverse();
}
