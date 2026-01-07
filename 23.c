24.// Write a C program using function to sort an array in ascending order and display only unique elements. The function should take the array and its size as parameters, sort the elements in ascending order, and remove duplicates while displaying. Use for loop inside the function. Print the unique sorted array in the main function.



#include <stdio.h>

void sortUnique(int a[], int n)
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

    printf("Unique sorted elements:\n");
    printf("%d ", a[0]);
    for(i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
            printf("%d ", a[i]);
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

    sortUnique(a, n);
    return 0;
}