#include <stdio.h>
#include <string.h>
int is_palindrome(char *s){
    int l=strlen(s);
    char ss[l];
    strcpy(ss,s);
    //s=strrev(s);
    for(int i=0;i<l;i++){
        s[l-i-1]=ss[i];
    }
    if(strcmp(s,ss)==0) return 1;
    else return 0;
}
int main() {
    char s[1000];
    scanf("%s",&s);
    int f=is_palindrome(s);
    if(f==1) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}

