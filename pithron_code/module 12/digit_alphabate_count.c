#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[10000];
    while(t--){
        scanf("%s",&s);
        int c=0,sm=0,d=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]>='A'&&s[i]<='Z') c++;
            else if(s[i]>='a'&&s[i]<='z') sm++;
            else if(s[i]>='0'&&s[i]<='9') d++;
        }
        printf("%d %d %d\n",c,sm,d);
    }
}
