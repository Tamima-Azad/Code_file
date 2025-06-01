#include<stdio.h>
#include<string.h>
int main()
{

    char a[9];
    scanf("%s",a);
    int s=strlen(a);
    if(s<=3)
    {
        printf("%s",a);
    }
    else if(s==4)
    {
        printf("%c,%c%c%c",a[0],a[1],a[2],a[3]);
    }
    else if(s==5)
    {
         printf("%c%c,%c%c%c",a[0],a[1],a[2],a[3],a[4]);
    }
    else if(s==6)
    {
         printf("%c%c%c,%c%c%c",a[0],a[1],a[2],a[3],a[4],a[5]);
    }
    else if(s==7)
    {
         printf("%c,%c%c%c,%c%c%c",a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
    }
    else if(s==8)
    {
         printf("%c%c,%c%c%c,%c%c%c",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
    }
    else if(s==9)
    {
         printf("%c%c%c,%c%c%c,%c%c%c",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
    }
    return 0;
}
