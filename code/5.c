#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter a Celsius value: ");
    scanf("%f",&c);
    printf("Its Fahrenheit value: ");
    f=(9*c)/5+32;
    printf("%f",f);
    return 0;
}
