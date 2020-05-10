//determinant of a  matrix
#include<stdio.h>
int main()
{
	int r,c,i,j,det;
	printf("ENTER THE 3*3  SQUARE MATRIX ONLY\n");
	//printf("enter the rows and  of matrix\n");
	//scanf("%d",&r);//3
	int m[3][3];
	printf("enter the matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 	printf("Enter %d%d:",i+1,j+1);
			scanf("%d",&m[i][j]);
			
		}
	}
	printf("\n");
printf("entered matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 	
			printf("%d  ",m[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 	
			
			det=m[0][0]*((m[1][1]-m[2][2])-m[2][1]-m[1][2])-
			m[0][1]*(m[1][0]*m[2][2]-m[2][0]-m[1][2])
			+m[0][2]*(m[1][0]*m[2][1]-m[2][0]-m[1][1]);
			
			
		}
	}
	printf("Determinant of a matrix is %d ",det);
	return 0;
	
}
