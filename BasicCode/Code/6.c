#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++){
        printf("%d ",a[i]);
    }
    return 0;
}

