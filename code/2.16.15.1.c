#include<stdio.h>
int main()
{
    int y1,a,b;
    scanf("%d",&y1);
    if(y1%400!=0&&y1%100==0)
    {
        a=y1+4;
        printf("%d",a);
    }
    else if(y1%100!=0&&y1%4!=0)
    {
        if(y1%4==1)
        {
            b=y1-1;
            if(b%400==0)
            {
                printf("%d",b);
            }
            else if(b%100==0)
            {
                printf("%d",y1+3);
            }
            else
            {
                printf("%d",y1+3);
            }
        }
        else if(y1%4==2)
        {
            b=y1-2;
            if(b%100!=0)
            {
                printf("%d",b);
            }
            else
            {
                printf("%d",y1+2);
            }
        }
        else if(y1%4==3)
        {
            b=y1+1;
            if(b%100!=0)
            {
                printf("%d",b);
            }
            else
            {
                printf("%d",y1-3);
            }
        }

    }

    return 0;
}
