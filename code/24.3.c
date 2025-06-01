#include<stdio.h>
int main()
{
    char i=1,j;
    scanf("%d",&j);
    for(i=1;i<=j;i=i+4){
      printf("%d ",i++);
    }
}
