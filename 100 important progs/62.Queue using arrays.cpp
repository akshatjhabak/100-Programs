//Queue using arrays
#include<iostream>
using namespace std;
#define max 5
class Queue{
	public:
		int item,a[max],r,f;
		Queue()
		{
			f=0;
			r=0;
		}
		void insertionQueue();
		void deletionQueue();
		void traverse();
		void display();
};
void Queue::insertionQueue()
{if(r>=max)
cout<<"queue is full\n";
else{
	cout<<"enter item to insert in queue\n";
	cin>>item;
	a[r]=item;
	r++;
}
	
	
}
void Queue::deletionQueue()
{
	if(f==r)
	cout<<"queue is empty\n";
	else{
		f++;
		traverse();
	}
}
void Queue::traverse()
{
	for(int i=f;i<r;i++)
	cout<<a[i]<<"\n";
}
void Queue::display()
{
	int c;
	cout<<"enter 1 for insertion ,2 for deletion,3 for traverse"<<endl;
	cin>>c;
	if(c==1){
		insertionQueue();
		traverse();
		display();
		
	}
	else if(c==2)
	{
		deletionQueue();
		display();
	}
	else
	{
		traverse();
		display();
	}
}
main()
{
	Queue q;
	q.display();
	
}
