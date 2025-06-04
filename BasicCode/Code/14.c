#include <stdio.h>
int main()
{
    int size, position, newValue;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size + 1];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the position to insert (0 to %d): ", size);
    scanf("%d", &position);
    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);
    if (position < 0 || position > size)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for (int i = size; i > position; i--)
    {
        array[i] = array[i - 1];
    }
    array[position] = newValue;
    size++;
    printf("Array after inserting %d at position %d:\n", newValue,
           position);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
