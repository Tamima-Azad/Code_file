#include<stdio.h>
int main()
{
    float basic,gross,hra,da;
    scanf("%f",&basic);
    if(basic<=10000){
        hra=basic*0.2;
        da=basic*0.8;
    }
    else if(basic<=20000){
        hra=basic*0.25;
        da=basic*0.9;
    }
    else if(basic>20000){
        hra=basic*0.3;
        da=basic*0.95;
    }
    gross=basic+hra+da;
    printf("%.2f",gross);
    return 0;
}
