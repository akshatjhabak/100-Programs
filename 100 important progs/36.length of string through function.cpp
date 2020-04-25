#include<iostream>
#include<string.h>
using namespace std;
int lengthstr(string s)
{  string *p=&s;
   int count=0,i=0;
   while((*p)[i]!='\0')
   {
   	count++;
   	i++;
   	
   }
   return count;
}
main()
{
string s;
cout<<"enter the string\n";
getline(cin,s);
	cout<<"the length of string is\n"<<lengthstr(s);
	
}
