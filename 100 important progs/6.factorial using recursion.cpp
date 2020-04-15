#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{ int fact;
	if(n==1)
	return 1;
	else
	{
	fact=n*factorial(n-1);
	return fact;
	}
}
int main()


{
	int n,fact;
	cout<<"enter the number for factorial"<<endl;
	cin>>n;
	fact=factorial(n);
	
	cout<<"factorial of a number is "<<" "<<fact<<endl;
	
	
return 0;
	
}


