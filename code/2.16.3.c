#include<stdio.h>
int main()
{
    char t;
    scanf("%c",&t);
    if(t>='a' && t<='z') {
        printf("%c is lowercase",t);
    }
    else if(t>='A' && t<='Z'){
        printf("%c is upercase",t);
    }
    else
    {
        printf("%c is not a alphabet",t);
    }
    return 0;
}
