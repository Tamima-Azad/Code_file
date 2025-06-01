#include<stdio.h>
int main()
{
	int a ;
	printf("Enter your number :");
	scanf("%d",&a);
	if(a <= 101){

	if(a >=80){

			printf("You have got A+");
		}
			else if(a >=70){
			printf("You have got A");
		}
			else if(a >=60){
			printf("You have got A-");
		}
			else if(a >=10){
    		printf("You have got B");
		}
    }
    else {
    	printf("The number is invalid");
	}
	return 0;
}
