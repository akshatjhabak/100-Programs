//sum of array elements using malloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,n,i,sum=0;	
	
	printf("Enter size of the array: ");
	scanf("%d",&n);

	//declare memory dynamically
	ptr=(int*)malloc(n*sizeof(int));

	
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",(ptr+i));
	}

	//print array elements
	printf("\nEntered array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	printf("Sum of array elements is: %d\n",sum);
	

	free(ptr);	// free dynamically allocated memory.
	
	return 0;
}
