#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            printf("%d ", i);
            if(i%2==0) printf("1\n");
            else printf("0\n");
        }
    }
}
