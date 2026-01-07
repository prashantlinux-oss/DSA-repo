15 //Write a C program using function to search an element in an array and display the index position(s) where it occurs. The function should take the array, its size, and the element to search as parameters. Use for loop inside the function to find all occurrences. Print the index position(s) in the main function.


#include <stdio.h>

void searchElement(int a[], int n, int key)
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("Element not found");
}

int main()
{
    int a[50], n, i, key;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    searchElement(a, n, key);
    return 0;
}