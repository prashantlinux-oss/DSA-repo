26.// Write a C program using a function to replace all negative elements in an array with 0 (in-place). The function should take the array and its size as parameters. Use for loop and if condition inside the function to replace negative elements with 0. Print the modified array in the main function.


#include <stdio.h>

void replaceNegative(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
            a[i] = 0;
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    replaceNegative(a, n);

    printf("Modified array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
