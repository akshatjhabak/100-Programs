#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int num,n,rem=0,count=0,oct=0,o,i,r;
    char hex[50] = "";
    scanf("%d",&num);
    n=num;
    while(n!=0){
        rem=n%10;
        rem=rem*(pow(8,count));
        oct=oct+rem;
        n=n/10;
        ++count;
    }
    printf("Octal %d\n",oct);
    o=oct;
    while(o!=0){
        r=o%16;
        switch(rem){
            case 0:
            {
                strcat(hex,"0");
                break;
            }
            case 1:
            {
                strcat(hex,"1");
                break;
            }
            case 2:
            {
                strcat(hex,"2");
                break;
            }
            case 3:
            {
                strcat(hex,"3");
                break;
            }   
            case 4:
            {
                strcat(hex,"4");
                break;
            }
            case 5:
            {
                strcat(hex,"5");
                break;
            }
            case 6:
            {
                strcat(hex,"6");
                break;
            }
            case 7:
            {
                strcat(hex,"7");
                break;
            }
            case 8:
            {
                strcat(hex,"8");
                break;
            }
            case 9:
            {
                strcat(hex,"9");
                break;
            }
            case 10:
            {
                strcat(hex,"A");
                break;
            }
            case 11:
            {
                strcat(hex,"B");
                break;
            }
            case 12:
            {
                strcat(hex,"C");
                break;
            }
            case 13:
            {
                strcat(hex,"D");
                break;
            }
            case 14:
            {
                strcat(hex,"E");
                break;
            }
            case 15:
            {
                strcat(hex,"F");
                break;
            }            
        }
        o=o/16;
    }
    int nstr=strlen(hex);
     i=nstr-1;
    while(i>=0){
    	printf(hex[i]);
    	i=i--;
	}
    for(i=nstr-1;i>=0;i--)
   printf("Hexadecimal %s",hex[i]);
   strrev(hex);  
    printf("Hexadecimal %s",hex);
    return 0;
}
