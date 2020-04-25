//nCr value using do while loop
#include<bits/stdc++.h>
using namespace std;
int fact (int n1)
{
	long int f=1;
	int i=n1;
	do{
		f=f*i;
		i--;
		
	}while(i>0)
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
