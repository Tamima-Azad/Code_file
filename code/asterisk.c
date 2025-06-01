#include<stdio.h>
int main()
{
    int i,r,s,p=0;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(s=1;s<=r-1;s++){
            printf(" ");
        }
        for(p=1;p<=(2*i-1);p++){
            printf("* ");
        }

     printf("\n");
    }
    return 0;
}
