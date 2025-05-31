#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||year%400==0)
        printf("%d is a leap year\n",year);
    else{
        printf("%d is not a leap year\n",year);
        if(year%400!=0 && year%100==0){
        printf("%d & %d both are nearest leap year",year-4,year+4);
        }
        else if(year%4!=0 && year%100!=0){
                if(year%4==1){
                if(year%100!=0 || year%400==0){
                    printf("%d is nearest leap year",year-1);
                }
                else
                    printf("%d is nearest ",year+4);
               }
               if(year%4==2){
                if(year%100!=0 || year%400==0){
                    printf("%d is nearest",year+2);
                }
                else {
                    printf("%d is nearest",year-4);
                }
               }
               if(year%4==3){
                   year=year+1;
                if(year%100!=0||year%400==0){
                    printf("%d is nearest",year);
                }
                else{
                    printf("%d is nearest",year-4);
                }
               }
         }
    }
    return 0;

}
