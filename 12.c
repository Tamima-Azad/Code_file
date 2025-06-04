#include<stdio.h>
int main()
{
    int n1,n,c=0,s=0;
    scanf("%d",&n);
    n1=n;
      while(n>0){
        n/=2;
        c++;
    }
    for(int i=c-1;i>=0;i--)
    {
        printf("%d",1&n1>>i);
    }
    return 0;
}
