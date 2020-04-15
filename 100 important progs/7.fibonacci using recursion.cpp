#include<bits/stdc++.h>
using namespace std;
int fibonacci(int);
 int main()
 { 
 
 	int n;
 	cout<<"enter the limit you want the series"<<endl;
 	cin>>n;
 	for(int i=0;i<=n;i++)
 	cout<<fibonacci(i)<<endl;
 	return 0;
 	
 }
 int fibonacci(int n)
 {
 	if(n==0 || n==1)
 	return n;
 	else 
 	return fibonacci(n-1)+fibonacci(n-2);
 	
 }

