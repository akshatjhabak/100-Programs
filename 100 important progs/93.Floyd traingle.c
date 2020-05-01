//floyd triangle
#include<stdio.h>
int main()
{	
	int n,i,j,num=1;
	printf("enter the number of rows\n");
	scanf("%d",&n);
		for(i=1;i<=n;i++)//for rows
	{
		for(j=1;j<=i;j++)//for cols
		{
		printf("%d ",num);
		num++;
		}
		
		printf("\n");
	}
	return 0;
}
