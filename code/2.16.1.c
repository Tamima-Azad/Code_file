#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);
    if((s=='a'||s=='e'||s=='i'||s=='o'||s=='u')||
       (s=='A'||s=='E'||s=='I'||s=='O'||s=='U'))
       {
           printf("%c is vowel",s);
       }
    else if ((s>='a'&& s<='z')||(s>='A'&& s<='Z'))
    {

        printf("%c is consonant",s);
    }
    else
    {
        printf("%c is not alphabet",s);
    }
    return 0;
}
