#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
         while(n>0){
        n/=2;
        c++;
    }
    printf("%d",32-c);
}

