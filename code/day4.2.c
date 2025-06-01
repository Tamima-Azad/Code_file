#include<stdio.h>
int main()
{
    int marks=70;
    if(marks>=80)
    {
        printf("A+");
    }
    else if(marks>=70)
    {
        printf("A");
    }
    else if(marks>=60)
    {
        printf("B");
    }
    else if(marks>=50)
    {
        printf("C");
    }
    else if(marks>=40)
    {
        printf("D");
    }
    else
    {
        printf("fail");
    }
    return 0;

}
