#include<stdio.h>
int main()
{
	int i,n, a = 1;
	printf("Enter the number : ");
	scanf("%d",&n);
	//printf("1");
	for(i =1;i <=n;i++){

    printf(" %d ",a);
	a = a + 4;
	// 1 5 9 13 17
	if(i == n-1){
	 break;}
	}

}
