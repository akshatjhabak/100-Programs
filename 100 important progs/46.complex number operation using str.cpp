//addition of complex number using structure
#include<iostream>
using namespace std;
struct Complex{
	int real,img;
};
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
main()
{
	struct Complex c1,c2;
	
	cout<<"enter the real part and imaginary part of 1complex no.\n";
	cin>>c1.real>>c1.img; //c1,c2 are internal pointers of struct
cout<<"enter the real part and imaginary part of 2complex no.\n";
	cin>>c2.real>>c2.img;
	int n;
	do{
		cout<<"enter 1 for addition\n";
		cout<<"enter 2 for subtraction\n";
		cout<<"enter 3 for multiplication\n";
		int ch;
		cout<<"enter your choice\n";
		cin>>ch;
		switch(ch)
		{
		 		case 1:cout<<"Addition of 2 complex numbers is"<<add(c1.real,c2.real)<<"+"<<add(c1.img,c2.img)<<"j\n";
				break;
				
		 		case 2:cout<<"Subtraction of 2 complex numbers is"<<sub(c1.real,c2.real)<<"-"<<sub(c1.img,c2.img)<<"j\n";
		 		break;
		 		
		 		
		 		case 3:cout<<"Multiplication of 2 complex numbers is"<<mul(c1.real,c2.real)<<"*"<<mul(c1.img,c2.img)<<"j\n";
		 		break;
		 		
		 		default:cout<<"invalid input\n";
		 		break;
		 	
		}
		cout<<"press 0 to exit and any key to continue\n";
		cin>>n;
	}while(n!=0);
	
	
}
