//octal to hexadecimal conversion
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int octnum, rev=0, rem, count=0, hex=0, mul=1, i=0, k=0;
    char binnum[40] = "", hexnum[40];
    printf("Enter any Octal Number: ");
    scanf("%d", &octnum);
    while(octnum!=0)
    {
        rem = octnum%10;
        if(rem>7)
        {
            count++;
            break;
        }
        rev = (rev*10) + rem;
        octnum = octnum/10;
    }
    if(count==0)
    {
        octnum = rev;
        while(octnum!=0)
        {
            rem = octnum%10;
            switch(rem)
            {
                case 0: strcat(binnum, "000");
                    break;
                case 1: strcat(binnum, "001");
                    break;
                case 2: strcat(binnum, "010");
                    break;
                case 3: strcat(binnum, "011");
                    break;
                case 4: strcat(binnum, "100");
                    break;
                case 5: strcat(binnum, "101");
                    break;
                case 6: strcat(binnum, "110");
                    break;
                case 7: strcat(binnum, "111");
                    break;
            }
            octnum = octnum/10;
        }
        while(binnum[k]!='\0')
            k++;
        count=1;
        k--;
        while(k>=0)
        {
            if(binnum[k]=='0')
                rem = 0;
            else
                rem = 1;
            hex = hex + (rem*mul);
            if(count%4==0)
            {
                if(hex<10)
                    hexnum[i] = hex+48;
                else
                    hexnum[i] = hex+55;
                mul = 1;
                hex = 0;
                count = 1;
                i++;
            }
            else
            {
                mul = mul*2;
                count++;
            }
            k--;
        }
        if(count!=1)
            hexnum[i] = hex+48;
        if(count==1)
            i--;
        printf("\nEquivalent Hexadecimal Value = ");
        count = 0;
        for(i=i; i>=0; i--)
        {
            if(hexnum[i]=='0' && count==0)
            {
                count++;
                continue;
            }
            else
                printf("%c", hexnum[i]);
        }
    }
    else
        printf("\nInvalid Octal Digit %d", rem);
    getch();
    return 0;
}
