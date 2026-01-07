23 //Write a C program using function to sort array elements in ascending order. The function should take the array and its size as parameters and sort the elements in ascending order. Use for loop (nested if needed) inside the function. Print the sorted array in the main function.


#include <stdio.h>

void sortAsc(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
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

    sortAsc(a, n);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}