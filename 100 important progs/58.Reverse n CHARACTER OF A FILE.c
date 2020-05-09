//reverse n characters of a file
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	FILE *fp1;
	char c=argv[2];
    int n=(int)c;
    int i=0,temp=n;
    char r[n],m[100],ch;
    n=n-1;
    fp1=fopen(argv[1],"r");
    if(fp1==NULL)
    {
    	printf("Problem in opening file\n");
    	return 0;
	}
    while((ch=fgetc(fp1))!=EOF)
    {
    	if(n>=0)
    	{
    		r[n]=ch;
    	    n--;
		}
		else
		{
			m[i]=ch;
			i++;
		}
	}
	fclose(fp1);
	
	fp1=fopen(argv[1],"w");
	for(i=0;i<temp;i++)
	fprintf(fp1,"%c",r[i]);
	for(i=0;m[i]!='\0';i++)
	fprintf(fp1,"%c",m[i]);
	printf("Done");
	fclose(fp1);
	return 0;
} 
