8 //Write a C program using function to find the sum of array elements.
//  The function should take the array and its size as parameters and return the sum. Use while loop inside the function. Print the sum in the main function.


#include <stdio.h>

int arraySum(int a[], int n)
{
    int i = 0, sum = 0;
    while(i < n)
    {
        sum = sum + a[i];
        i++;
    }
    return sum;
}

int main()
{
    int a[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum = %d", arraySum(a, n));
    return 0;
}
