//strong number
#include<stdio.h>
int main()
{
	int n,sum=0,i,temp,rem,fact;
	printf("enter the number to check is is strong or not\t ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		 fact=1;
		for(i=rem;i>=1;i--)
		{
			fact=fact*i;
		}
		sum+=fact;
		n=n/10;
	}
	n=temp;
	if(n==sum)
	printf("it is strong number");
	else
	printf("not a strong number");
	
}
