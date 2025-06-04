#include<stdio.h>
double power(double n,double p)
{
    if(p==0) return 1.0;
    else
       return n*power(n,p-1);
}
int main()
{
    double n,p;
    scanf("%lf %lf",&n,&p);
    double r=power(n,p);
    printf("%.2lf",r);
}
