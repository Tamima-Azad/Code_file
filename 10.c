#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=0;i<32;i++)
    {
        ((n>>i&1)==0)?c++:32-c;
    }
    printf("Total zeros = %d\nTotal ones = %d",c,32-c);
}
