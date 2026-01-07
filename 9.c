9 //Write a C program using function to find the average of array elements. The function should take the array and its size as parameters and return the average as float. Use for loop inside the function. Print the average in the main function.


#include <stdio.h>

float average(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return (float)sum / n;
}

int main()
{
    int a[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Average = %.2f", average(a, n));
    return 0;
}
