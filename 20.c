21.// Write a C program using function to reverse the array without using another array (in-place). The function should take the array and its size as parameters and reverse the elements in-place. Use while loop inside the function. Print the reversed array in the main function.


#include <stdio.h>

void reverseArray(int a[], int n)
{
    int i = 0, temp;
    while(i < n / 2)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
        i++;
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
