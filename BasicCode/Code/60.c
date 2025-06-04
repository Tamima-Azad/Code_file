#include <stdio.h>

// Function to print characters with star pattern
void printWithStars(char ch) {
    int i, j;
    switch (ch) {
        case 'C':
            for (i = 1; i <= 5; i++) {
                for (j = 1; j <= 5; j++) {
                    if ((i == 1 && j != 1) || (i != 1 && j == 1))
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'S':
            for (i = 1; i <= 5; i++) {
                for (j = 1; j <= 5; j++) {
                    if ((i == 1 && j != 1) || (i == 5 && j != 5) || (i == 3) || (i != 1 && j == 1) || (i != 5 && j == 5))
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'E':
            for (i = 1; i <= 5; i++) {
                for (j = 1; j <= 5; j++) {
                    if ((i == 1) || (i == 3) || (i == 5) || (i != 1 && j == 1))
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case '6':
            for (i = 1; i <= 5; i++) {
                for (j = 1; j <= 5; j++) {
                    if ((i == 1) || (i == 5) || (i != 1 && j == 1) || (i == 3 && j != 5) || (i != 5 && j == 5))
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case '0':
            for (i = 1; i <= 5; i++) {
                for (j = 1; j <= 5; j++) {
                    if ((i == 1) || (i == 5) || (i != 1 && j == 1) || (i != 5 && j == 5))
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Character not supported!\n");
    }
}

int main() {
    // Print "CSE 60" with a star pattern
    char str[] = "CSE 60";
    int length = sizeof(str) / sizeof(str[0]) - 1; // To exclude the null terminator

    for (int i = 0; i < length; i++) {
        printWithStars(str[i]);
        printf("\n");
    }

    return 0;
}
