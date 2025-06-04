#include<stdio.h>
int main()
{
    int i,j,n=0;
    for(i=0;i<10;i++)
    {
        for(j=10;j>0;j--)
        {
            n++;
            printf("*\n");
            if(j==i+1)
                break;
        }
    }
    printf("%d",n);
}
