#include<stdio.h>
int main ()
{
    int i,j=0;
    for(i=1;i<=25;i++){
        j++;
        printf("*");
        if(j==5||j==10||j==15||j==20||j==25){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    //2nd row
    for(i=1;i<=30;i++){
        j++;
        if(i==1||i==6||i==11||i==16||i==24||j==28){
            printf("*");
            }
            else{
                printf(" ");
            }
        if(j==5||j==10||j==15){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    //3rd row
    for(i=1;i<=24;i++){
        j++;
        if(i==2||i==3||i==6||i==4||i==5||i==14||i==15||i==23||i==24){
            printf(" ");
        }
        else{
            printf("*");
        }
        if(j==5||j==10||j==15||j==20||j==21){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    //4th row
    for(i=1;i<=25;i++){
        j++;
        if(i==1||i==10||i==11||i==16||i==20||i==21||i==25){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(j==5||j==10||j==15||j==20||j==25){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    //5th row
    for(i=1;i<=25;i++){
        j++;
        printf("*");
        if(j==5||j==10||j==15||j==20){
                printf("   ");
            }}
        return 0;
}
