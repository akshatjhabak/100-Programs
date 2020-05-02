//illustration of unions
#include<iostream>
using namespace std;
union student{
	int age;
	char name;
	float marks;
	
};
main()
{
	student s;
cout<<"memory occupied by union data "<<sizeof(s.age)<<" "<<sizeof(s.marks)<<" "<<sizeof(s.name)<<endl;
}
