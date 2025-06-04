#include<stdio.h>
int main()
{
    int n,n1,c=0;
    scanf("%d",&n);
    n1=n;
     while(n>0){
        n/=2;
        c++;
    }
    int s1=pow(2,c)-1;
    printf("%d",n1^s1);
}
