//check leap yr or not
#include<iostream>
using namespace std;
int main()
{
	int yr;
	cout<<"enter the year to check"<<endl;
	cin>>yr;
	if(yr>0)
	{
		if(yr%4==0 && yr%100==0 && yr%400==0)
		cout<<"it is leap year"<<endl;
		else if(yr%4==0 && (yr%100)!=0)
		cout<<"it is a leap year"<<endl;
		else 
		cout<<"not a leap yr"<<endl;
	}
	
	
}
