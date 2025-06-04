#include<stdio.h>
float sd(int x)
{
    return sqrt(x);
}
int main()
{
    int a;
    scanf("%d",&a);
    while(a!=0){
     printf("%.2f\n",sd(a%10));
     a=a/10;
    }
}
