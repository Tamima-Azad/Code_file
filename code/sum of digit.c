#include<stdio.h>
int main()
{
    int a,sum=0,k,qu,rem;
    scanf("%d",&a);
    if(a>=10000&&a<=99999){
        qu=a/10;
        rem=a%10;
        sum=sum+rem;
        rem=qu%10;
        qu=qu/10;
        sum=sum+rem;
        rem=qu%10;
        qu=qu/10;
        sum=sum+rem;
        rem=qu%10;
        qu=qu/10;
        sum=sum+rem+qu;
        printf("%d",sum);
    }
    else
        printf("invalid");
        return 0;
}
