//binary search with recursion
#include<iostream>
using namespace std;
int binarysearch(int a[],int f,int l,int item)
{
	if(f>=l)
	return -1;
	else
	{
		int m=(f+l)/2;
		if(a[m]==item)
		return m+1;
		if(a[m]<item)
		f=m+1;
		if(a[m]>item)
		l=m-1;
		
		binarysearch(a,f,l,item);
	}
}
int main()
{
	int n;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the array elements in sorted order"<<endl;
	for(int i=0;i<n;i++)
    cin>>a[i];
    int item;
    cout<<"enter the element you want to search"<<endl;
	cin	>>item;
	int f=0,l=n-1;
	
	int res=binarysearch(a,f,l,item);
	if(res==-1)
	cout<<"item not found"<<endl;
	else 
	cout<<"found at position "<<res<<endl;
	

	 return 0;	
}
