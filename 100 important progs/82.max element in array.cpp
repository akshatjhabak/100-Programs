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
	int max;
	max=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	
		
	}
		cout<<"greatest element is "<<max<<endl;
	
}
