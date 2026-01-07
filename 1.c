2 //Write a C program using function to find sum of digits of a number. 
//The function should take a number (for eg: 123456) as a parameter and return the result. Use while loop inside the function. Print the result in the main function.

#include <stdio.h>

int sumOfDigits(int number)
{
    int sum = 0;
    while(number != 0)
    {
        sum = sum + number % 10;
        number = number / 10;
    }
    return sum;
}
{
    int sum = 0;
    while(num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}