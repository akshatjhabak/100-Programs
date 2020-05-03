//gross salary
#include<stdio.h>
#include<conio.h>
struct Employee
	{
		char empname[24];
		float basicpay,da;
	};
int main()
{
	int i;
	struct Employee e[100];
	printf("Enter employees name and basic pay\n");
	for(i=1;i<=100;i++)
	{
		printf("Enter details of %d employee\n",i);
	    scanf("%s%f",&e[i].empname,&e[i].basicpay);
	    e[i].da=e[i].basicpay*0.52;
    }
	printf("Employee's Name \t Gross Salary\n");
	for(i=1;i<=100;i++)
	printf("%s\t\t\t%f\n",e[i].empname,e[i].basicpay+e[i].da);
	return 0;
}
