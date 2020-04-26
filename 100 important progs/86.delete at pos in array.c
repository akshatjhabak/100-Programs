//delete an element at desired position
#include<stdio.h>
int main()
{
	int n,pos,i,j;
	printf("enterr the size of array\n");
	scanf("%d",&n);
	int a[n+1];
	printf("enter the array elements\n");
	for( i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n");
	printf("the array elements are\n");
	for( i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("enter the  position you want to delete \n");
	scanf("%d",&pos);
	if(pos>=0 && pos<=n-1)
	{
	for(j=pos+1;j<n;j++)
	a[j-1]=a[j];
	n--;	
	}
	printf("___________\n");
	printf("after deletion the array elements are\n");
	for( i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
