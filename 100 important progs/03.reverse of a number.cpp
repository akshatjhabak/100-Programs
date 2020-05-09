#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	int rem ,sum=0;

	
	while(n!=0)
	{
		rem=n%10;
		sum=(sum*10)+rem ;
		n=n/10;
		
	}
	
	cout<<"reversed number is" <<endl<<sum;
	
}
