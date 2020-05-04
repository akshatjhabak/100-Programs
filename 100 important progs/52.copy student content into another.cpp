//copy the details of one student in another
#include<iostream>
using namespace std;
struct Student
{
	int rollno,marks;
}s1,s2;
Student copy(Student x)
{
	s2.rollno=x.rollno;
	s2.marks=x.marks;
}
main()
{
	cout<<"Enter RollNo. and Marks of the first student\n";
	cin>>s1.rollno>>s1.marks;
	copy(s1);
	cout<<"Student details copied\n";
	cout<<"Student's rollno. = "<<s2.rollno<<"\t"<<"Marks = "<<s2.marks;
}
