19.// Write a C program using function to find the second largest element in an array. The function should take the array and its size as parameters and return the second largest element. Use while loop inside the function. If finding the second largest is not possible, display proper message in the main function.


#include <stdio.h>

int secondLargest(int a[], int n)
{
    int i = 0, max, smax;
    max = smax = -9999;

    while(i < n)
    {
        if(a[i] > max)
        {
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] != max)
        {
            smax = a[i];
        }
        i++;
    }
    return smax;
}

int main()
{
    int a[50], n, i, smax;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n < 2)
    {
        printf("Second largest not possible");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    smax = secondLargest(a, n);

    if(smax == -9999)
        printf("Second largest not possible");
    else
        printf("Second largest = %d", smax);

    return 0;
}