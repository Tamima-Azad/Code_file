#include<stdio.h>
int main()
{
    int amount,n1000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    n1000=n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
    printf("Enter amount : ");
    scanf("%d",&amount);
    printf("Totall no of notes : \n");
    if(amount>=1000){ n1000=amount/1000;
                      printf("n1000=%d\n",n1000);
                      amount-=n1000*1000;}
    if(amount>=500){  n500=amount/500;
                      printf("n500=%d\n",n500);
                      amount-=n500*500;}
    if(amount>=200){  n200=amount/200;
                      printf("n200=%d\n",n200);
                      amount-=n200*200;}
    if(amount>=100){  n100=amount/100;
                      printf("n100=%d\n",n100);
                      amount-=n100*100;}
    if(amount>=50){   n50=amount/50;
                      printf("n50=%d\n",n50);
                      amount-=n50*50;}
    if(amount>=20){   n20=amount/20;
                      printf("n20=%d\n",n20);
                      amount-=n20*20;}
    if(amount>=10){   n10=amount/10;
                      printf("n10=%d\n",n10);
                      amount-=n10*10;}
    if(amount>=5){    n5=amount/5;
                      printf("n5=%d\n",n5);
                      amount-=n5*5;}
    if(amount>=2){    n2=amount/2;
                      printf("n2=%d\n",n2);
                      amount-=n2*2;}
    if(amount>=1){    n1=amount;
                      printf("n1=%d\n",n1);}
    return 0;
}
