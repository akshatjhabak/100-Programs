//decimal to octal conversion
#include<iostream>
using namespace std;
int main()
{
	int decimal,i=1,octal[100],temp;
	cout<<"enter a decimal number\n";
	cin>>decimal;
	temp=decimal;
	while(temp!=0)
	{
		octal[i++]=temp%8;
		temp=temp/8;
		
	}
	cout<<"The octal number of "<<decimal<<"is :";
	for(int j=i-1;j>0;j--)
	cout<<octal[j];
		
	
	return 0;
}
