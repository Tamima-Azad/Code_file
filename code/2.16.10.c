#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d==0){
        x1=(-b)/(2*a);
        x1=x2;
        printf("x1=%.2f\nx2=%.2f",x1,x2);
    }
    else if(d>0){
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("x1=%.2f\nx2=%.2f",x1,x2);
    }
    else {
        printf("roots are unreal");
    }
    return 0;
}
