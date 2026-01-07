28. //Write a C program using a function to delete an element from a given position in an array by shifting elements. The function should take the array, its size, and the position to delete as parameters. Use for loop to shift elements and reduce the effective size of the array. Print the modified array in the main function.
#include <stdio.h>

void deletePos(int a[], int *n, int pos)
{
    int i;
    for(i = pos; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}

int main()
{
    int a[50], n, i, pos;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    deletePos(a, &n, pos);

    printf("Modified array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}