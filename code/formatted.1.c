/*#include<stdio.h>
int main()
{
    char a[9];
   gets(a);
   for(int i=0;i<1;i++)
   {
    printf("%c%c%c,%c%c%c,%c%c%c",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
   }
    return 0;
}*/
#include<stdio.h>
int main()
{
   int a,qu,rem,quu,remm;
   scanf("%d",&a);
   if(a<1000){printf("%d",a);}
   if(a>=1000&&a<1000000){
    if(a%1000==0){printf("%d,000",a/1000);}
    else{
        printf("%d,%d",a/1000,a%1000);
    }
   }
    if(a>=1000000&&a<100000000){
        if(a%1000==0){
            rem=a%1000;
            qu=a/1000;
            quu=qu/1000;
            printf("%d,000,000",quu);
        }
        else{
                rem=a%1000;
        qu=a/1000;
            remm=qu%1000;
            quu=qu/1000;
                printf("%d,%d,%d",quu,remm,rem);}
    }
    if(a>=100000000&&a<200000000){
        if(a%1000==0)
        {
            rem=a%1000;
            qu=a/1000;
            remm=qu%1000;
            quu=qu/1000;
            printf("%d,000,000",quu);
        }
        else{
            rem=a%1000;
            qu=a/1000;
            remm=qu%1000;
            quu=qu/1000;
            printf("%d,%d,%d",quu,remm,rem);
        }
    }


    return 0;
}
