#include<stdio.h>
#include<conio.h>
int main()
{
    char str[120]="Digital Bangladesh";
    int n;
    n=strlen(str);
    str[4]='\0';
    printf("%s",str);
    return 0;
}
