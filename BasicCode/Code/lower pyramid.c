 #include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);
 // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

