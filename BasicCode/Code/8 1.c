#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char a[101],b[53];
    int x=0,y=26,d=0;
    gets(a);
    int c=strlen(a);
    for(int i=65;i<=90;i++){
        b[x]=i;
        x++;}
    for(int i=97;i<=122;i++){
        b[y]=i;
        y++;}
    for(int i=0;i<c;i++){
        for(int j=0;j<52;j++){
            if(a[i]==b[j]){
                b[j]='1';}}}
    for(int j=0;j<52;j++){
            if(b[j]=='1'){
                d++;}}
    printf("%d",d);
    return 0;
}
