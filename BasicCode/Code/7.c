#include<stdio.h>
#define pi 3.1416
float area(int r)
{
    return pi*r*r;
}
int main()
{
    int r;
    scanf("%d",&r);
    printf("%.2f",area(r));
}
