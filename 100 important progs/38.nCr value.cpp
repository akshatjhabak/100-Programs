//to find out nCr value
#include<bits/stdc++.h>
using namespace std;
int fact(int n1)
{
	 long int f=1;
	for(int i=1;i<=n1;i++)
	f=f*i;
	return f;
	
}
main()
{
	cout<<"enter value of n"<<endl;
	int n;
	cin>>n;
	cout<<"enter value of r"<<endl;
	int r;
	cin>>r;
	long long int v=((fact(n))/((fact(n-r))*(fact(r))));
	cout<<" nCr VALUE IS \t"<<v;
	
	
}
