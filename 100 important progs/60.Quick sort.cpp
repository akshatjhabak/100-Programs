//quick sort
#include<iostream>
using namespace std;
int partition(int a[],int f,int l)
{
	int i=f-1,pivot=a[l];
	for(int j=f;j<l;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	int temp=a[i+1];
	a[i+1]=a[l];
	a[l]=temp;
	return (i+1);
}
void quickSort(int a[],int f,int l)
{
	if(f<l)
	{
	int pos=partition(a,f,l);
	quickSort(a,f,pos-1);
	quickSort(a,pos+1,l);
	}
}
main()
{
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"Enter array elements\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	quickSort(a,0,n-1);
	cout<<"Sorted array:-\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}
