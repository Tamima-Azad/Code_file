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
    printf("%d is the highest set bit\n",c);
    int i,s=0;
    for(i=0; ;i++){
       s++;
       if((1&(n1>>i))==1){
        break;
       }
    }
    printf("%d is the lowest bit ",s);
}
