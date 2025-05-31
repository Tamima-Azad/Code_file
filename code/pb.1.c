#include<stdio.h>
int main()
{
  float u;
    scanf("%f",&u);
    if(u<=50)
    {
        float tk=(0.5*u);
        printf("Electricity bill = %.2f\n",tk+(tk*.2));
    }
    else if(u<=150)
    {
        float tk=0.75*u;
        printf("Electricity bill = %.2f\n",tk+(tk*.2));
    }
     else if(u<=250)
    {
        float tk=1.20*u;
        printf("Electricity bill = %.2f\n",tk+(tk*.2));
    }
     else
    {
        float tk=1.50*u;
        printf("Electricity bill = %.2f\n",tk+(tk*.2));
    }
    return 0;
}
