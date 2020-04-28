//student details using structure
#include<iostream>
using namespace std;
struct Student {
	int sno;
	string sname;
	float smarks;
	
};
main()
{
	int n;
	float sum=0,avg;
	cout<<"enter total number of students\n";
	cin>>n;
	struct Student s[n];
	cout<<"enter serialno,name and marks of student\n";
	for(int i=0;i<n;i++)
	{
		cin>>s[i].sno>>s[i].sname>>s[i].smarks;
		sum=sum+s[i].smarks;
	}
	avg=sum/n;
	cout<<"Average marks : "<<avg<<endl;
	cout<<"Sno.\tName\tMarks"<<endl;
	for(int i=0;i<n;i++)
	if(s[i].smarks>=avg)
	cout<<s[i].sno<<"\t"<<s[i].sname<<"\t"<<s[i].smarks<<endl;
	
	
	}
