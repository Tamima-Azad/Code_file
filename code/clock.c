#include<stdio.h>
int main()
{
    int m,h;
    float c;
    scanf("%d %d",&h,&m);
    c=(60*h-11*m)/2.0;
    if(c<180){
        printf("%f",c);
    }
    else {
        printf("%f",360-c);
    }
    return 0;
}
