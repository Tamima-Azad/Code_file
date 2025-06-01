
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&b);
    b=b*3+1;
    for(a=1; ;a=a+3)
    {
        printf("%d ",a);
        if(a==b)
            break;
    }
    return 0;
}
