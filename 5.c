5 //Write a C program using function to read and display elements of an array.
//  The function should take the array and its size as parameters. Use for loop to read and display elements. Print the elements in the main function by calling this function.


#include <stdio.h>

void readDisplay(int a[], int n)
{
    int i;
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[50], n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    readDisplay(a, n);
    return 0;
}
