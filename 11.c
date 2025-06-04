#include<stdio.h>
int main()
{
    int n,n1,s=0,c=0,c1=0;
    scanf("%d",&n);
    n1=n;
      while(n>0){
        n/=2;
        c++;
    }
    c1=c;
    for(int i=0;i<c1;i++){
        s=s+(1&n1>>i)*pow(2,c-1);
        c--;
    }
    printf("%d",s);
}
