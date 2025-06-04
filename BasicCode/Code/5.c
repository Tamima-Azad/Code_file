#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i, j, a, sum, digit, fact;

    for (i = n; ; i++) {
        a = i;
        sum = 0;

        while (a > 0) {
            digit = a % 10;
            fact = 1;

            for (j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            a /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
