//armstrong  number of n digit
#include<bits/stdc++.h>
using namespace std;
int CountNoOfdigits(int n)
{
    return (log10(n)+1);
}
int pow(int a, int b)
{
	int res=1;
    for(int c =1;c<=b;c++)
    {
        res=res*a;
    }
    return res;
}
main()
{
	int n;
	cout<<"enter the number you want to check\n";
	cin>>n;
	int l=CountNoOfdigits(n);//storing the num of digits
	int temp=n,sum=0;
	while(temp>0)
	{
	    sum+=pow(temp%10,l);
	    temp/=10;	
	}
	
	
	if(n==sum)
	cout<<"it is a armstrong number\n";
    else
    cout<<"not an armstrong number\n";
}
