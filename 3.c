3 //Write a C program using function to find GCD (HCF) of two numbers. 
// The function should take two integers as parameters and return the GCD. Use while loop inside the function. Print the result in the main function.

#include <stdio.h>

int gcd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("GCD = %d", gcd(a, b));
    return 0;
}