// largest element in array
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"the array elemets are"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int max,smax;
	max=a[0];
	smax=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		if(a[i]>smax && a[i]<max)
		smax=a[i];
		
	}
		cout<<"greatest element is "<<max<<endl;
		cout<<" second greatest element is "<<smax<<endl;
	
}
