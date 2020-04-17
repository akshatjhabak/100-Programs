//linear search using recursion
#include<iostream>
using namespace std;
#define max 50
int linearsearch(int a[],int item,int index,int n)
{
	int pos=0;
	if(index>=n)
	{
		return 0;
	}
    else if(a[index]==item)
	{
	pos=index+1;
	return pos;	
	}
	else 
	{
		return linearsearch(a,item,index+1,n);
	}
}
int main()
{
	int n;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
	int a[max];
	cout<<"the array elements are"<<endl;
	for(int i=0;i<n;i++)
    cin>>a[i];
    int item;
    cout<<"enter the element you want to search"<<endl;
	cin	>>item;
	int pos;
	
	pos=linearsearch(a,item,0,n);
	if(pos!=0)
	cout<<"element found at "<<pos<<endl;
	else
	 cout<<"element not found"<<endl;
	 return 0;	
}
