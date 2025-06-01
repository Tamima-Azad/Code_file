#include<stdio.h>
int main()
{
    int a,l;
    scanf("%d %d",&a,&l);
    if(a>=25&&a<=30&&l>3)
        printf("active");
    else if(a<25||a>30&&l>7)
        printf("active");
    else
        printf("not");
    return 0;
}
