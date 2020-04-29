//stack using linkedlist
#include<iostream>
using namespace std;
struct stnode{
	int data;
	stnode *nextnode;
};
stnode *newnode,*top=NULL,*bottom=NULL,*temp;
int n=0;
/////////
void traverse()
{	temp=bottom;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->nextnode;
	}
}
/********/
void getnode()
{
	newnode=new stnode;
	cout<<"enter the elements";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
/*****************/
void Iemptystack()
{
	getnode();
	bottom=newnode;
	top=newnode;
	n++;
}
/*******/
void  pushStack(){
	getnode();
	top->nextnode=newnode;
	top=newnode;
	n++;
	traverse();
}
///////////
void popStack(){
if(bottom==top)
{
	bottom=NULL;
	top=NULL;
	n--;
}
else{
	temp=bottom;
	while(temp->nextnode!=top) 
	temp=temp->nextnode;
	temp->nextnode=NULL;
	top=temp;
	n--;
	traverse();
}
}
main()
{
	int ch;
	char ch1;
	do{
		if(top==NULL) { 
		cout<<"check"<<endl;
			Iemptystack();
		}
		else{
			cout<<"1.push\n2.pop\nEnter your choice"<<endl;
			cin>>ch;
			if(ch==1) pushStack();
			else if(ch==2) popStack();
			else if(ch>2) cout<<"invalid choice";
		}
		cout<<"press y or Y to continue"<<endl; cin>>ch1; 
	} while(ch1=='y'||ch1=='Y');
}


