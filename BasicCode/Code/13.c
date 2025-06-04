#include <stdio.h>
int main()
{
    int size, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the position of the element to be deleted (0 to %d): ", size - 1);
    scanf("%d", &position);
    if (position < 0 || position >= size)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for (int i = position; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
    printf("Array after deleting element at position %d:\n", position);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
