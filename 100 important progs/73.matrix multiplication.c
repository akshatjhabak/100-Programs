#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("Enter row and column for matrix 1 and 2\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("Enter matrix 1\n");
    for( i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    printf("\n");
    
    printf("Enter matrix 2\n");
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("Resultant matrix \n");
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            printf("%d ",(b[i][j]+a[i][j]));
        } 
        printf("\n");  
    }

}
