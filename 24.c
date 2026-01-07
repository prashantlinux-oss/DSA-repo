25.// Write a C program using function to sort an array and then search a given element in the sorted array. The function should take the array, its size, and the element to search as parameters. First, sort the array in ascending order using for loop, then search for the element using for loop and return its index or message if not found. Print the sorted array and search result in the main function.



#include <stdio.h>

int sortAndSearch(int a[], int n, int key)
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

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int a[50], n, i, key, pos;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = sortAndSearch(a, n, key);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    if(pos == -1)
        printf("\nElement not found");
    else
        printf("\nElement found at index %d", pos);

    return 0;
}