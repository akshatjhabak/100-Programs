#include<iostream>
using namespace std;
int Maxarray(int a[],n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int main()
{
	int n;
	cout<<"enter the size od array\n";
	cin>>n;
	cout<<"enter array elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int res=Maxarray(a,n);
	cout<<"maximum value is ="<<res;
}
