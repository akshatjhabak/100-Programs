#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,res;
	cout<<"enter the number for factorial"<<endl;
	cin>>n;
	
	res=1;
	if(n<0)
	cout<<"factorial does not exist "<<endl;
	else{
		for(int i=1;i<=n;i++)
	{
		res=res*i;
	}
	cout<<res;
	}
	
	
}
