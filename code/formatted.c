#include<stdio.h>
int main()
{
    int a,qu,rem,sum;
    scanf("%d",&a);
    if(a>=1000000&&a<200000000){
        rem=a%1000;
        qu=a/1000;
        sum=sum+rem;
        rem=qu%1000;
        qu=qu/1000;
        printf("%d,%d,%d",qu,rem,sum);
    }
    else if(a>=1000)
    return 0;
}
