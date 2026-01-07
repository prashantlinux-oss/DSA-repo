16. //Write a C program using function to count even numbers in an array. The function should take the array and its size as parameters and return the count of even numbers. Use for loop and if condition inside the function. If no even number exists, display a proper message in the main function.


#include <stdio.h>

int countEven(int a[], int n)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    int a[50], n, i, c;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    c = countEven(a, n);

    if(c == 0)
        printf("No even number found");
    else
        printf("Total even numbers = %d", c);

    return 0;
}