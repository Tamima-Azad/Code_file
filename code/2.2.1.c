#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<1 ||a>12){
        printf("error");
    }
    else if(a==1){ printf("I"); }
    else if(a==2){ printf("II"); }
    else if(a==3){ printf("III"); }
    else if(a==4){ printf("IV"); }
    else if(a==5){ printf("V"); }
    else if(a==6){ printf("VI"); }
    else if(a==7){ printf("VII"); }
    else if(a==8){ printf("VII"); }
    else if(a==9){ printf("IX"); }
    else if(a==10){ printf("X"); }
    else if(a==11){ printf("XI"); }
    else if(a==12){ printf("XII"); }
    return 0;

}
