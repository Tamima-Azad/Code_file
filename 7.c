#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=0; ;i++){
            s++;
         if((1&(n>>i))==1){
        break;
       }
    }
    printf("%d",s-1);

}
