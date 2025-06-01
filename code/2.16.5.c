#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1)
        printf("31 days");
    else if(a==2)
        printf("28 or 29 days");
    else if(a==3)
        printf("31 days");
    else if(a==4)
        printf("30 days");
    else if(a==5)
        printf("31 days");
    else if(a==6)
        printf("30 days");
    else if(a==7)
        printf("31 daya");
    else if(a==8)
        printf("31 days");
    else if(a==9)
        printf("30 days");
    else if(a==10)
        printf("31 days");
    else if(a==11)
        printf("30 days");
    else if(a==12)
        printf("31 days");
    else
        printf("%d is not a month number",a);
    return 0;

}
