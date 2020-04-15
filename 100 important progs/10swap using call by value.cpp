#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
cout<<"Inside swap  function\n"<<"a = "<<x<<", b = "<<y<<endl;
}
main()
{
	int a,b;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	cout<<"Outside swap  function, before swap\n"<<"a = "<<a<<", b = "<<b<<endl;
	swap(a,b);
	cout<<"Outside swap  function, after swap\n"<<"a = "<<a<<", b = "<<b<<endl;
} 
