//upper triangular matrix
#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("ENTER THE SQUARE MATRIX ONLY\n");
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
	printf("\n");
printf("entered matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 	
			printf("%d  ",m[i][j]);
			
		}
		printf("\n");
	}	
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 	if(i>j && i==j)
			{
			printf("matrix is not upper trangular matrix");
			return 0;
			}
		
		}
	}
	printf("given matrix is a uppper traingular matrix\n");
	return 0;
	
	
}
