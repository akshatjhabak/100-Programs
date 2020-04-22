#include<iostream>
using namespace std;
int pos=0,n;
struct node{
	int data;
	node *next;
};
node *newnode,*start=NULL,*end=NULL,*temp,*next;
void getnode()
{
	newnode=new node;
	cout<<"enter element";
	cin>>newnode->data;
	newnode->next=NULL;
}
//////
void traverse()
{
	if(start==NULL) cout<<"empty list"<<endl;
	else{
		cout<<"the resultyant list is :\n";
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
			
		}
	}
	}
	
/////////////
void iEmptylist()
{
	getnode();
	start=newnode;
	end=newnode;
	n++;
	traverse();
}
void insert_at_first()
{
	 getnode();
	newnode->next=start;
	start=newnode;
	n++;
	traverse();
	
}
/*************/
void insert_at_last()
{
	getnode();
	end->next=newnode;
	end=newnode;
	n++;
	traverse();
	
}
/*********/
void insert_at_pos()
{
	int pos;cout<<"enter the position\n";
	cin>>pos;
	if(pos>=1 && pos<=n+1)
	{ getnode();
		temp=start;
		for(int i=1;i<=pos-2;i++) 
	    temp=temp->next;
	    newnode->next=temp->next;
		temp->next=newnode;
		n++;
		traverse();
			    
	}
	else if(pos<1 && pos>n+1)cout<<"invalid postion";
}
/*****/
void delete_from_fisrt()
{
	start=start->next;
	n--; traverse();
}
/***/
void del_from_end()
{
	temp=start;
	while(temp->next!=end)	temp=temp->next;
		temp->next=NULL;
		end=temp;
		n--;traverse();
}
////////
void del_from_pos()
{int pos;
cout<<"enter the position";cin>>pos;
if(pos>=1 && pos<=n)
{
	temp=start;
	for(int i=0;i<=pos-2;i++)
	temp=temp->next;
	temp->next=temp->next->next;
	n--;
	traverse();
	
}
}
///////

int main()
{
	int ch;char ch1;
	do
	{
	if(start==NULL) { cout<<"Check\n";iEmptylist();}
	else
{ cout<<"1.insert at first\n2.insert at last\n3.insert at position\n4.delete from first\n5.delete from last\n6.delete from position\nEnter your choice\n";
	 cin>>ch;
		 if(ch==1)	insert_at_first();
		 else if(ch==2) insert_at_last();
		 else if(ch==3) insert_at_pos();
		 else if(ch==4) delete_from_fisrt();
		 else if(ch==5) del_from_end();
		 else if(ch==6)	del_from_pos();
		 else cout<<"wrong selection"<<endl;
}

cout<<"press y or Y to continue"<<endl;cin>>ch1;
}while(ch1=='y'||ch1=='Y');

}
