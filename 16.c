#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Enter nth bit to set: ");
    scanf("%d",&p);
    printf("%d ",n|(n>>(p-1)));
    return 0;
}
