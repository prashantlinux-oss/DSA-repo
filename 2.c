3 //Write a C program using function to check whether a number is prime. 
// The function should take an integer as a parameter and return 1 if it is prime, otherwise 0. Use for loop inside the function. Print the result in the main function.

#include <stdio.h>

int isaPrime(int n)
{
    int i;
    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(isaPrime(n))
        printf("Prime number");
    else
        printf("Not prime number");

    return 0;
}
