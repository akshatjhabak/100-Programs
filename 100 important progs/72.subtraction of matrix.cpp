 //matrix subtraction
#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter the dimension of the matrices\n");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c];
	printf("Enter the values for the 1st matrix\n");
	for(i=0;i<r;i++)
	{
        for(j=0;j<c;j++)
	    {
	    	printf("Enter %d%d = ",i+1,j+1);
		    scanf("%d",&a[i][j]);
	    }
    }
	printf("Enter the values for the 2nd matrix\n");
	for(i=0;i<r;i++)
	{
        for(j=0;j<c;j++)
	    {
	    	printf("Enter %d%d = ",i+1,j+1);
		    scanf("%d",&b[i][j]);
	    }
    }
	printf("After subtraction of the matrices\n");	  
    for(i=0;i<r;i++)
	{  
	   for(j=0;j<c;j++)
	   printf("%d  ",a[i][j]-b[i][j]);
	   printf("\n");   
    }
    return 0;
}
