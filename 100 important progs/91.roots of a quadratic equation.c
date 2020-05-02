//roots of quadratic equation
#include<stdio.h>
int main()
{
	int a,b,c,d;
	float rt1,rt2;
	printf ("enter the values of a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d==0)
	{
		printf("both the roots are equal\n");
		rt1=-b/(2.0*a);
		rt2=rt1;
		printf("the first root is %f\n",rt1);
		printf("the second root is %f",rt2);
	}
	else if(d>0)
	{ printf("both roots are real and different\n");
	
		rt1=(-b+sqrt(d))/(2.0*a);
		rt2=(-b-sqrt(d))/(2.0*a);
		printf("the first root is %f\n",rt1);
		printf("the second root is %f",rt2);
		
	}
	else{
		printf("roots are imaginary so no solution\n");
	}
	return 0;
}
