//gcd using recusrion
#include<iostream>
using namespace std;
int cgcd(int ,int);
int main()
{
int n1,n2;
cout<<"enter the numbers to find gcd"<<endl;
cin>>n1>>n2;
cout<<"the gcd of"<<n1<<" "<<n2<<"is"<<cgcd(n1,n2);
return 0;
	
}
int cgcd(int n1, int n2)
{ if (n1==0)
 return n2;
 else if(n2==0)
 return n1;
 else 
  return cgcd(n1,n1%n2);
	
}
