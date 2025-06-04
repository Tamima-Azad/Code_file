#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
      int flag=1;
      for(int j=2;j<=i/2;j++)
      {
          if(i%j==0){ flag=0; }
      }
      if(flag==1) printf("%d is prime\n",i);

  }
  return 0;
}
