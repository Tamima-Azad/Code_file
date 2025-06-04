#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    char s[100];
    gets(s);
    int len=strlen(s);
    strlwr(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            a++;
        }
        else if(s[i]>=48&&s[i]<=57){
            b++;
        }
        else if(s[i]==' '){
            c++;
        }
        else {
            d++;
        }
    }
    printf("Vowels=%d Digits=%d White space=%d Consonants=%d",a,b,c,d);
}
