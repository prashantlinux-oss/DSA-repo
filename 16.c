17. //Write a C program using function to find the maximum element in an array. The function should take the array and its size as parameters and return the maximum element. Use for loop inside the function. Print the maximum element in the main function.


#include <stdio.h>

int findMax(int a[], int n)
{
    int i, max = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{
    int a[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Maximum = %d", findMax(a, n));
    return 0;
}