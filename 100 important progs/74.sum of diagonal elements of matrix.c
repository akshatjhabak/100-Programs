//sum of diagonal elements
#include<stdio.h>
main()
{
	int r,c,i,j,sum=0;
	printf("enter the rows of matrix\n");
	scanf("%d",&r);
	printf("enter the columns of matrix\n");
	scanf("%d",&c);
	int m[r][c];
	printf("enter the matrix elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 	printf("Enter %d%d:",i+1,j+1);
			scanf("%d",&m[i][j]);
			
		}
	}
	
printf("entered matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 	
			printf("%d ",m[i][j]);
			
		}
		printf("\n");
	}
printf("\n");
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 	
			if(i==j)
			sum=sum+m[i][j];
		}
	}
	printf("Sum of diagonal elements is %d :",sum);
	
	
	
}
