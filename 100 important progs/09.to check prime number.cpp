//to check prime or not
#include<iostream>
using namespace std;
main()
{
	int n,count=0;
	cout<<"enter the no to check prime"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{ if(n%i==0)
	  {
	  	count++;
	  }
	}
	if(count==2)
	cout<<"it is a prime number"<<endl;
	else 
	cout<<"not a prime number";
}
