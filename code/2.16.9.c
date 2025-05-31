#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
        printf("triangle is equilateral");
    else if(a==b||b==c||c==a)
        printf("triangle is isoscales");
    else if (a!=b &&b!=c &&c!=a)
        printf("triangle is scalene triangle");
    return 0;

}
