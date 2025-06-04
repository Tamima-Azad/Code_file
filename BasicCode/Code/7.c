#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    int l,x=0;
    strlwr(a);
    l=strlen(a);
    for(int i=0;i<l;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            b[x]=a[i];
            x++;
        }
        b[x]='\0';
    }
        puts(b);



    return 0;
}

