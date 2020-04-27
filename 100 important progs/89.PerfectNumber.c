//perfect number
#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the number to check is is perfect or not\t ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		sum+=i;	
		}
	}
	if(n==sum)
	printf("it is a perfect number");
	else 
	printf("it is not a perfect number");
	return 0;
	
}
