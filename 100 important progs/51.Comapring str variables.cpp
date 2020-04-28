#include<iostream>
using namespace std;
main()
{
	struct Student
{
	int a;
};
struct Teacher{
	int b;
};
	 struct Teacher t;
	 struct Student s;
	 cin>>s.a;
	 cin>>t.b;
	 if(s.a==t.b) cout<<"identical structures\n";
	 else
	 cout<<"not identical";
	 
	 
}
