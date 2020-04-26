#include<bits/stdc++.h>
using namespace std;
main()
{
	string  s;
	int temp;
	cout<<"enter the string"<<endl;
	getline(cin,s);
	for(int i=0;i<s.length()-1;i++)
	{
		for(int j=0;j<(s.length()-i-1);j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
			
		}
	}
	cout<<"the string after sorted is "<<s;	
}

