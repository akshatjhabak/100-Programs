#include<stdio.h>
int number(int n)
{if(n<=100)
{
	printf("%d\n",n);
	number(n+1);
}
	
}
 main()
{
	int n=1;
	number(n);
	
}
