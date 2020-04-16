//pyramid of numbers 
#include<iostream>
using namespace std;
int main()
{
	int n,num;
	cout<<"enter the number of rows"<<endl;
	cin>>n;
	num=n;
 	for(int i=1;i<=n;i++)//for rows
 	{  
 	for(int j=1;j<=num;j++) //for spaces
 	{ cout<<" ";	 
	 }
	 num--;
	 for(int k=1;k<=i;k++)//for number
	 {
	 	cout<<" "<<k;
	 	
	 }
	 cout<<"\n";	
	 }
}

