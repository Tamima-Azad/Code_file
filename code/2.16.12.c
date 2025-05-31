#include<stdio.h>
int main()
{
    int phy,chem,bio,math,com;
    float ave;
    scanf("%d %d %d %d %d",&phy,&chem,&bio,&math,&com);
    ave=(phy+chem+bio+math+com)/(float)5;
    printf("Percentage=%.2f\n",ave);
    if(ave>=90)
        printf("Grade A",ave);
    else if(ave>=80)
        printf("Grade B");
    else if(ave>=70)
        printf("Grade C");
    else if(ave>=60)
        printf("Grade D");
    else if(ave>=40)
        printf("Grade E");
    else if(ave<40)
        printf("Grade F");
    return 0;
}
