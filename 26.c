27 //Write a C program using function to swap the first and last elements of an array. The function should take the array and its size as parameters. Use a temporary variable and simple swapping logic inside the function. Print the modified array in the main function.


#include <stdio.h>

void swapFirstLast(int a[], int n)
{
    int temp;
    temp = a[0];
    a[0] = a[n - 1];
    a[n - 1] = temp;
}

int main()
{
    int a[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    swapFirstLast(a, n);

    printf("Modified array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}