#include<stdio.h>
int prime(int a)
{
  static int i=2;
  if(a%i!=0){
      i++;
      if(a>i)
    prime(a);
  }
  else
  return 0;
}
int main()
{
    int n,flag;
    scanf("%d",&n);
    flag=prime(n);
    if(flag ==0) printf("Not prime");
    else printf("Prime");


}
