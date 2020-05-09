#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cout<<"enter a number to check"<<endl;
	
	cin>>n;
	
	int rem,sum=0,r;
	
	int temp=n;
	
	while(n>0)
	{ r=n%10;
	sum=(sum*10)+r;
	n=n/10;
		
	}
	n=temp;
	if(sum==n)
	cout<<"palindrome number"<<endl;
	else 
	cout<<"not a palindrome"<<endl;
}
