#include<stdio.h>
int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}
int main(){
    int n;scanf("%d",&n);
    //int nm=count(int n);
    printf("%d",count( n));


}
