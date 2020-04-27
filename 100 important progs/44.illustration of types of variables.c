//usage of automatic ,global,extern ,static,register variables
#include<stdio.h>
int a=16;//global variable
int main()
{
	static int i=0;//static variable
	extern int c;//extern variable
	
	{
	   auto	int b=10;//auto variable
		register int e=25;//register variable
		
	}
	return 0;
	
}
