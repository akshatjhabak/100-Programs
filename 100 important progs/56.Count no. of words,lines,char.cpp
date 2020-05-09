//count mumber of characters,words and lines in a file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	int c=0,l=1,w=1;
	char ch,fname;
	cout<<"enter the file name\n";
	cin>>fname;
	fstream f;
	fopen(fname);
	while(f>>ch)
	{
		c++;
		if(ch==" ")
		w++;
		if(ch=="\n")
		l++;
	}
	f.close();
	cout<<"no. of character are "<<c<<endl;
	cout<<"no. of words are "<<w<<endl;
	cout<<"no. of lines are "<<l<<endl;
	
}
