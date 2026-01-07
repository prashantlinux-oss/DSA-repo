6 //Write a C program using function to read and display elements of an array. 
// The function should take the array and its size as parameters. Use while loop to read and display elements. Print the elements in the main function by calling this function.


#include <stdio.h>

void readDisplay(int a[], int n)
{
    int i = 0;
    printf("Enter array elements:\n");
    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;
    printf("Array elements are:\n");
    while(i < n)
    {
        printf("%d ", a[i]);
        i++;
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
