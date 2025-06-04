#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter no: ");
    scanf("%d",&n);
    printf("Enter nth bit: ");
    scanf("%d",&p);
    printf("Befor toggle %d th bit is %d\n",p,1&n>>(p-1));
    printf("After toggle %d th bit is %d",p,(n^1<<(p-1)));
}

