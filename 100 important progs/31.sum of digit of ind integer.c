#include<stdio.h>
int main()
{
	int n,rem,s=0;
	printf("enter the integer\n");
	scanf("%d",&n);

    while(n>0)
	{rem=n%10;
	s=s+rem;
	n=n/10;	
	}
	printf("sum of digits of %d =%d ",n,s);
	return 0;
	

}
