//copy content of one file to another
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
	string s1,s2;
	cout<<"Enter a line\n";
	getline(cin,s1);
	ofstream fout;//for writing to a file
	fout.open("sample1.txt");
	fout<<s1;
	fout.close();
	ifstream fin; //reading a file
	fin.open("sample1.txt");
	fin>>s2;//copyying the content 
	fin.close();
	cout<<"Content copied to sample2.txt";
	fout.open("sample2.txt");
	fout<<s2;
	fout.close();
}
