//binary search without recursion
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the array elements in sorted order:"<<endl;
	for(int i=0;i<n;i++)
    cin>>a[i];
    int item;
    cout<<"enter the element you want to search"<<endl;
	cin	>>item;
	int mid,f=0,l=n-1;
	int c=0;

		while(l>=f)
	{ c++;
	
	
		mid=(f+l)/2;
		if(a[mid]==item)
		{cout<<"element found at "<<mid+1<<endl;
		break;
		}
		
		if(a[mid]>item)
		l=mid-1;
		
		if(a[mid]<item)
		f=mid+1;
	}
	
	if(n==0) cout<<"underflow"<<endl;
	return 0;
	
	}
	
	
	
	
	
	

