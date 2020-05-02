//addition withou arithmetic operator
#include<stdio.h>
main()
{
	int x,y,carry;
	printf("enter the first number\n");
	scanf("%d",&x);
	printf("enter the second number\n");
		scanf("%d",&y);
	while(y!=0)
	{
		carry=x&y;//and
		x=x^y;//taking xor
		y=carry<<1;//leftshift
	}
	printf("addition of numbers is : %d ",x);
	
}
