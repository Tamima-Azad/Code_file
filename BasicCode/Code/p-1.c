 #include<stdio.h>
#include<stdlib.h>
int main()
{
    void *p;
    int a;
    scanf("%d",&a);
    p=malloc(sizeof(int));
    printf("%d\n",p);
    int *q=(int*)p;
    *q=a;
    printf("%d",*q);
}
