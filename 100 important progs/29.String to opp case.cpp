#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	cout<<"enter the string\n";
	getline(cin,s);
	if(isupper(s[0]))
	{ 
		for(int i=0;s[i]!='\0';i++)
		s[i]=tolower(s[i]);
	}
	else
	{
	    for(int i=0;s[i]!='\0';i++)
	    s[i]=toupper(s[i]);
    }  
	cout<<"Resultant String = "<<s;
}
