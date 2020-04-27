//finding second smallest element in c
#include<stdio.h>
int main()
{
int n,i,f,s;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	f=a[0];
	s=a[1];
	
	for(i=0;i<n;i++)
	{if(a[i]<f)
	{
		s=f;
		f=a[i];
	}
	else if(s>a[i] && f<a[i])
	{
		s=a[i];		
	}
		
	}
	printf("the second smallest element is %d ",s);
	return 0;
}
