//stack using array
#include<iostream>
using namespace std;
#define max 5
class stack{
	public:
		int item ,a[max],top=-1;
		
		void push();
		void pop();
		void traverse();
		void display();
		
};
void stack::push(){
	if(top==max)
	cout<<"underflow"<<endl;
	else{
		cout<<"enter the item you want to push"<<endl;
		cin>>item;
		top++;
		a[top]=item;
		
	}
}
void stack::pop(){
	if(top==-1)
	cout<<"underflow"<<endl;
	else{
		item=a[top];
		top--;
		traverse();
}		
}
void stack::traverse(){
	for(int i=0;i<=top;i++)
	cout<<a[i]<<endl;
}
void stack::display(){
	
	int c;
	cout<<"enter 1 for push ,2 for pop,3 for traverse"<<endl;
	cin>>c;
	if(c==1){
		push();
		display();
		
	}
	else if(c==2)
	{
		pop();
		display();
	}
	else
	{
		traverse();
		display();
	}
}
main(){
	stack s;
	s.display();
	
}
