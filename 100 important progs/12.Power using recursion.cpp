//power of a^b using recursion
#include<bits/stdc++.h>
using namespace std;
int POW(int a,int b)
{ int y;
	if(b==1)
	return a;
	else 
	return (a*POW(a,b-1));
	
}
int main()
{
	int a,b;
	cout<<"enter the base digit"<<endl;
	cin>>a;
	cout<<"enter the  digit in power for base"<<endl;
	cin>>b;
	cout<<"Power is "<<POW(a,b);
	
}

