#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,a=0,b=1,sum;
	cout<<"enter the fibonacci series you want "<<endl;
	cin>>n;
	cout<<"fibonacci terms are"<<a<<endl<<b<<endl;
	
	for(int i=1;i<=n-2;i++)
	{

		sum=a+b;
		cout<<sum<<endl;
		a=b;;
		b=sum;
	
	}
}
