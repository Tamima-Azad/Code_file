#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='a'&& a<='z')||(a>='A'&& a<='Z')){
       printf("%c is alphabet",a);
    }
    else if (a>='0'&&a<='9'){
        printf("%c is digit",a);
    }
    else
    {
        printf("special character");
    }
    return 0;


}

