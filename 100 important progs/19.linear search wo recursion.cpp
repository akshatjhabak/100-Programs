//linear search without recursion 
#include<iostream>
using namespace std;
#define max 50
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
	int i;
	for(i=0;i<n;i++)
	{if (a[i]==item)
	{
			cout<<"element found atposition "<<i<<endl;
			break;
	}

	}
	if(i==n)
	cout<<"element not found"<<endl;
	
	
}
