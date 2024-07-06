#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    scanf("%s",&s);
    int k[26]={0};
    for(int i=0;i<strlen(s);i++){
            int v=s[i]-'a';
           k[v]++;
    }
    for(int i=0;i<26;i++){
        if(k[i]!=0)
            printf("%c - %d\n",i+97,k[i]);
    }
}
