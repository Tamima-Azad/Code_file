#include<stdio.h>
#include<string.h>
void rev(a )
{

    strrev(a);
    puts(a);
}
int main()
{
    char a[100];
    gets(a);
    rev( a);

    return 0;
}
