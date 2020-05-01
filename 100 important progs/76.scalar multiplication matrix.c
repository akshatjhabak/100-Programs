//scalar multiplication of matrix
#include<stdio.h>
int main()
{
	int i,j,r,c,n;
	printf("Enter the dimensions of the matrix\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the values for the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter %d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the  number to multiply to the matrix\n");
	scanf("%d",&n);
	printf("Given Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("Matrix after scalar multiplication\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d  ",a[i][j]*n);
		printf("\n");
	}
	return 0;
}
