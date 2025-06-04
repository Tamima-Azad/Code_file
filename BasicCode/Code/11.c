
#include<stdio.h>
#include<string.h>
int main()
{
    int c;
    char a[100],b;
    gets(a);
    int l=strlen(a);
    scanf("%c",&b);
    for(int i=0;i<=l;i++)
    {
        if(a[i]==b) c++;
    }
    printf("%d",c);
}
