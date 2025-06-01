#include<stdio.h>
int main()
{
    printf("Enter Your Marks: ");
    int m;
    scanf("%d",&m);
    if(m<=100 && m>=0){

    if(m>=80){
        printf("A+");
    }
    else if(m>=75) {
        printf("A");
    }
    else if(m>=70){
        printf("A-");
    }
    else if(m>=65){
        printf("B+");
    }
    else if(m>=60){
        printf("B");
    }
    else if(m>=55){
        printf("B-");
    }
    else if(m>=50){
        printf("C+");
    }
    else if(m>=45){
        printf("C");
    }
    else if(m>=40){
        printf("D");
    }
    else if(m>=0){
        printf("F");
    }
    }

    else {
        printf("The no is invalid");
    }

    return 0;

}
