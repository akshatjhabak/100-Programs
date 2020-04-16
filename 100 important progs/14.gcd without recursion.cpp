//gcd of 2 numbers using recusrion
#include<iostream>
using namespace std;
 int main()
 {
 	int n1,n2;
 	cout<<"enter 2 numbers"<<endl;
 	cin>>n1>>n2;
 	int gcd;
 	for(int i=1;i<=n1&&i<=n2;i++)
 	{
 		if(n1%i==0 && n2%i==0)
 		gcd=i;
 		
	 }
	 cout<<"gcd of "<<n1<<" and "<<n2<<" is "<<gcd;
	 return 0;
	 
 }
