#include<stdio.h>
#include<conio.h>
struct Library
	{
		int accessno,year,price;
		char authorname[24],title[50],publisher[50];
	};
int main()
{
	int n,i;
	printf("Enter the no. of books you want to add\n");
	scanf("%d",&n);
	struct Library b[n];
	printf("Enter book details(access number, author's name, title of thr book, year of publication,publisher's name and price)\n");
	for(i=0;i<n;i++)
	scanf("%d%s%s%d%s%d",&b[i].accessno,&b[i].authorname,&b[i].title,&b[i].year,&b[i].publisher,&b[i].price);
	printf("________________________________________________________________________________________________________________________\n");
	printf("Access Number  \t  Author's Name \tTitle of the Book \t  Year of Publication  \t  Publisher's Name  \t  Price\n");
	printf("________________________________________________________________________________________________________________________\n");
	for(i=0;i<n;i++)
	printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t$%d\n",b[i].accessno,b[i].authorname,b[i].title,b[i].year,b[i].publisher,b[i].price);
	return 0;
	
}
