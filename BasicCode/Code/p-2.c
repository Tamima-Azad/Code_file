#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    scanf("%d",&n);
    ptr =(int*)malloc(sizeof(int));
    for(int i=0;i<n;i++){
        int v;
        scanf("%d", &v);
        *(ptr+i) = v;
    }
    for(int i=0;i<n;i++)
        printf("Value:%d Add:%d\n",*(ptr+i),ptr+i);
}

