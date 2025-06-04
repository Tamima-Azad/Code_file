#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int j=0;
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>=65&&a[i]<=122||a[i]==' '){
            b[j]=a[i];
            j++;
        }
        else
            continue;
    }
    a[j]='\0';
    puts(b);
}

