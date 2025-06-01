#include<stdio.h>
int main()
{
    int a=10;
    int b=10.2;
    float c=10.2;
    double cs=10.2;
    char ch;
    ch='c';
    char strings[]="abcd";
    printf("%i\n",a);
    printf("%d\n",b);
    printf("%.2f\n",c);
    printf("%.2lf\n",cs);
    printf("%c\n",ch);
    printf("%s\n",strings);
    printf("%c",strings);
}
