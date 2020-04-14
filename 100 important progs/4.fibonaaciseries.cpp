#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,a=0,b=1,c;
	cout<<"enter the limit of series"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<a;
		c=a+b;
		b=a;
		b=c;
		
	}
}
