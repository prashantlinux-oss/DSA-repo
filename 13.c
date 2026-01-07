14. //Write a C program to check whether an element is present in an array. The program should take an array, its size, and the element to search as input. Use for loop to check the presence of the element. Display an appropriate message in the main function indicating whether the element is present or not.


#include <stdio.h>

int main()
{
    int a[50], n, i, key, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
