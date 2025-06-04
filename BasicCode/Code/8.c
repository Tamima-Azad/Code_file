#include<stdio.h>
#include<string.h>
int main()
{
    int s=0,i=0;
    char a[101],c[53];
    gets(a);
    int l=strlen(a);
    for( int j=65;j<=90;j++){
       c[i]=j ;
       i++;}
    int k=26;
    for(int j=97;j<=122;j++){
        c[k]=j;
        k++;}
    for(int j=0;j<l;j++){
        for(int t=0;t<52;t++){
            if(a[j]==c[t]){
                c[t]='2';}}}
    for(int j=0;j<52;j++){
        if(c[j]=='2'){ s++;}}
    printf("%d",s);
    return 0;
}
