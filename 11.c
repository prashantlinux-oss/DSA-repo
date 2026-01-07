12 //Write a C program using function to count even and odd numbers in an array. The function should take the array and its size as parameters and return two values (even count and odd count using pointers or struct). Use for loop inside the function. Print the counts in the main function.


#include <stdio.h>

void countEvenOdd(int a[], int n, int *even, int *odd)
{
    int i;
    *even = 0;
    *odd = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main()
{
    int a[50], n, i, even, odd;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    countEvenOdd(a, n, &even, &odd);
    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
}