//insert an ele in array at pos
#include<stdio.h>
int main()
{
	int n,pos,item,i,j;
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
	printf("enter the element and position you want to insert \n");
	scanf("%d %d ",&item,&pos);
	for(j=n-1;j>=pos;j--)
	a[j+1]=a[j];
	a[j+1]=item;
	n++;

	printf("___________\n");
	printf("after insertion the array elements are\n");
	for( i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
	
}
