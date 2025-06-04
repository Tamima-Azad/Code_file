#include<stdio.h>
int prime(int num){
    static int i=2;
    if(num%i!=0){
        i++;
        if(i<num)
        prime(num);

    }
    else return 1;

}
int main()
{
    int n;
    scanf("%d",&n);
    int f = prime(n);
    if(f==1)printf("Not prime.");
    else printf("Prime.");

}
