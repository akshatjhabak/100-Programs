//basic prog to grade
#include<iostream>
using namespace std;
main()
{
	int m;
	cout<<"enter the marks of student"<<endl;
	cin>>m;
	if(m>=60)
	cout<<"FIRST\n";
	 if (m>=50 && m<60)
	cout<<"SECOND\n";
	 if (m>=40 && m<50)
	cout<<"THIRD\n";
	if (m<40)
	cout<<"FAILED\n";
	
}
