20 //Write a C program using function to reverse an array. The function should take the array and its size as parameters and reverse the elements. Use for loop inside the function. Print the reversed array in the main function.


#include <stdio.h>

void reverseArray(int a[], int n)
{
    int i, temp;
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverseArray(a, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
