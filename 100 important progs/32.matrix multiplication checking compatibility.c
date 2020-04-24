//matrix multiplication compatibility
#include<stdio.h>
int main()
{

	int i,j,k,r1,r2,c1,c2;
	printf("Enter the number of rows for the first matrix\n");
	scanf("%d",&r1);
	printf("Enter the number of columns for the first matrix\n");
	scanf("%d",&c1);
	printf("Enter the number of rows for the second matrix\n");
	scanf("%d",&r2);
	printf("Enter the number of columns for the second matrix\n");
	scanf("%d",&c2);
	if(c1==r2)
	{ int m1[r1][c1],m2[r2][c2];
	int res[r1][c2];
		
		printf("enter the first matrix\n");
		for(i=0;i<r1;i++)
	{
        for(j=0;j<c1;j++)
	    {
	    	printf("Enter %d%d = ",i+1,j+1);
		    scanf("%d",&m1[i][j]);
	    }
    }
    
    printf("enter the second matrix\n");
    	for(i=0;i<r2;i++)
	{
        for(j=0;j<c2;j++)
	    {
	    	printf("Enter %d%d = ",i+1,j+1);
		    scanf("%d",&m2[i][j]);
	    }
    }
    printf("\n");
    printf("The first matrix is :\n");
    	for(i=0;i<r1;i++)
	{
        for(j=0;j<c1;j++)
	    {
		    printf("%d ",m1[i][j]);
	    }
	    printf("\n");
    }
    printf("\n");
     printf("The second matrix is :\n");
    	for(i=0;i<r2;i++)
	{
        for(j=0;j<c2;j++)
	    {
	    
		    printf("%d ",m2[i][j]);
	    }
	    printf("\n");
    }
    
    for( i=0;i<r1;i++)
    {
    	for( j=0;j<c2;j++)
    	{
    		for( k=0;k<c1;k++)
    		{
    		res[i][j]+=m1[i][k]*m2[k][j];
				
			}
		}
	}
	
	printf("The resultant matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		printf("%d ",res[i][j]);
		printf("\n");
	}

	}
	else
	{
		printf("matrix multiplication not posiible\n");
	}
	
	return 0;
	
	
}
