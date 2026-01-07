22.// Write a C program using function to reverse an array and then display the maximum element. The function should take the array and its size as parameters, reverse the array, and return the maximum element. Use for loop inside the function. Print the reversed array and maximum element in the main function.


#include <stdio.h>

int reverseAndMax(int a[], int n)
{
    int i, temp, max = a[0];

    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{
    int a[50], n, i, max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = reverseAndMax(a, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nMaximum = %d", max);
    return 0;
}