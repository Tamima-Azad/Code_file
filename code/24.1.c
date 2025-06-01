#include<stdio.h>
int main()
{
    int i;
    for(i=100;;i=i-1){
        printf("%d ",i);
        if(i==5)
        {
            break;
        }


    }
}
