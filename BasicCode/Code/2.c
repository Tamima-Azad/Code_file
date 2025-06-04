#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i, j, originalNum, sum, digit, fact;

    for (i = n; ; i++) {
        originalNum = i;
        sum = 0;

        while (originalNum > 0) {
            digit = originalNum % 10;
            fact = 1;

            for (j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            originalNum /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
