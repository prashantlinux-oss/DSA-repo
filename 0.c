1 //Write a C program using function to calculate the power of a number (aⁿ). The function should take two integers a and n as parameters and return the result. Use for loop inside the function. Print the result in the main function.

#include <stdio.h>

int powero(int a, int b)
{
    int i, result = 1;

    for(i = 1; i <= b; i++)
    {
        result = result * a; }
    return result;
}

int main()
{
    int a, n;
    printf("Enter a and n: ");
    scanf("%d%d", &a, &n);

    printf("Power = %d", powero(a, n));
    return 0;
}