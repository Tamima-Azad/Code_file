
#include <stdio.h>
#include <string.h>

int main() {
    char s[100000];
    scanf("%s",&s);
    int c=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            continue;
        }
        else {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
