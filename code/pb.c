#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/1000;
    printf("1000 = %d\n",b);
    int c=a%1000;
    int d=c/500;
    printf("500 = %d\n",d);
    int e=c%500;
    int f=e/200;
    printf("200 = %d\n",f);
    int g=e%200;
    int h=g/100;
    printf("100 = %d\n",h);
    int i=g%100;
    int j=i/50;
    printf("50 = %d\n",j);
    int k=i%50;
    int l=k/20;
    printf("20 = %d\n",l);
    int m=k%20;
    int n=m/10;
    printf("10 = %d\n",n);
    int o=m%10;
    int p=o/5;
    printf("5 = %d\n",p);
    int q=o%5;
    int r=q/2;
    printf("2 = %d\n",r);
    int s=q%2;
    printf("1 = %d\n\n",s);
    printf("Minimum number of total notes = %d\n\n\n",b+d+f+h+j+l+n+p+r+s);
    return 0;

}
