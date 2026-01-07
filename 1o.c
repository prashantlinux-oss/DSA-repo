Write a C program using function to calculate the power of a number (aⁿ). The function should take two integers a and n as parameters and return the result. Use for loop inside the function. Print the result in the main function.

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

Write a C program using function to find sum of digits of a number. The function should take a number (for eg: 123456) as a parameter and return the result. Use while loop inside the function. Print the result in the main function.

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









Write a C program using function to read and display elements of an array. The function should take the array and its size as parameters. Use while loop to read and display elements. Print the elements in the main function by calling this function.


#include <stdio.h>

void readDisplay(int a[], int n)
{
    int i = 0;
    printf("Enter array elements:\n");
    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;
    printf("Array elements are:\n");
    while(i < n)
    {
        printf("%d ", a[i]);
        i++;
    }
}

int main()
{
    int a[50], n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    readDisplay(a, n);
}


Write a C program using function to find the sum of array elements. The function should take the array and its size as parameters and return the sum. Use for loop inside the function. Print the sum in the main function.


#include <stdio.h>

int arraySum(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
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

Write a C program using function to find the sum of array elements. The function should take the array and its size as parameters and return the sum. Use while loop inside the function. Print the sum in the main function.


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





11. Write a C program using function to find the sum of only those array elements which are divisible by 3. The function should take the array and its size as parameters and return the sum. Use while loop inside the function. Print the sum in the main function.


#include <stdio.h>

int sumDivBy3(int a[], int n)
{
    int i = 0, sum = 0;
    while(i < n)
    {
        if(a[i] % 3 == 0)
            sum = sum + a[i];
        i++;
    }
    return sum;
}
{
    int a[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum divisible by 3 = %d", sumDivBy3(a, n));
    return 0;
}

Write a C program using function to count even and odd numbers in an array. The function should take the array and its size as parameters and return two values (even count and odd count using pointers or struct). Use for loop inside the function. Print the counts in the main function.


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



14. Write a C program to check whether an element is present in an array. The program should take an array, its size, and the element to search as input. Use for loop to check the presence of the element. Display an appropriate message in the main function indicating whether the element is present or not.


#include <stdio.h>

int main()
{
    int a[50], n, i, key, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}


Write a C program using function to search an element in an array and display the index position(s) where it occurs. The function should take the array, its size, and the element to search as parameters. Use for loop inside the function to find all occurrences. Print the index position(s) in the main function.


#include <stdio.h>

void searchElement(int a[], int n, int key)
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("Element not found");
}

int main()
{
    int a[50], n, i, key;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    searchElement(a, n, key);
}

16. Write a C program using function to count even numbers in an array. The function should take the array and its size as parameters and return the count of even numbers. Use for loop and if condition inside the function. If no even number exists, display a proper message in the main function.


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

17. Write a C program using function to find the maximum element in an array. The function should take the array and its size as parameters and return the maximum element. Use for loop inside the function. Print the maximum element in the main function.


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

    printf("Enter elements:\n");17. Write a C program using function to find the maximum element in an array. The function should take the array and its size as parameters and return the maximum element. Use for loop inside the function. Print the maximum element in the main function.


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
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Maximum = %d", findMax(a, n));
    return 0;
}

18. Write a C program using function to find the maximum element in an array. The function should take the array and its size as parameters and return the maximum element. If the array contains only one element, display a proper message in the main function. Use a for loop inside the function.


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

    if(n == 1)
    {
        printf("Only one element exists");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Maximum = %d", findMax(a, n));
    return 0;
}

19. Write a C program using function to find the second largest element in an array. The function should take the array and its size as parameters and return the second largest element. Use while loop inside the function. If finding the second largest is not possible, display proper message in the main function.


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

Write a C program using function to reverse an array. The function should take the array and its size as parameters and reverse the elements. Use for loop inside the function. Print the reversed array in the main function.


#include <stdio.h>

void reverseArray(int a[], int n)
{
    int i, temp;
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverseArray(a, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

21. Write a C program using function to reverse the array without using another array (in-place). The function should take the array and its size as parameters and reverse the elements in-place. Use while loop inside the function. Print the reversed array in the main function.


#include <stdio.h>

void reverseArray(int a[], int n)
{
    int i = 0, temp;
    while(i < n / 2)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
        i++;
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverseArray(a, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

22. Write a C program using function to reverse an array and then display the maximum element. The function should take the array and its size as parameters, reverse the array, and return the maximum element. Use for loop inside the function. Print the reversed array and maximum element in the main function.


#include <stdio.h>

int reverseAndMax(int a[], int n)
{
    int i, temp, max = a[0];

    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{
    int a[50], n, i, max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = reverseAndMax(a, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nMaximum = %d", max);
    return 0;
}


Write a C program using function to sort array elements in ascending order. The function should take the array and its size as parameters and sort the elements in ascending order. Use for loop (nested if needed) inside the function. Print the sorted array in the main function.


#include <stdio.h>

void sortAsc(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sortAsc(a, n);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

24. Write a C program using function to sort an array in ascending order and display only unique elements. The function should take the array and its size as parameters, sort the elements in ascending order, and remove duplicates while displaying. Use for loop inside the function. Print the unique sorted array in the main function.



#include <stdio.h>

void sortUnique(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Unique sorted elements:\n");
    printf("%d ", a[0]);
    for(i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
            printf("%d ", a[i]);
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sortUnique(a, n);
    return 0;
}

25. Write a C program using function to sort an array and then search a given element in the sorted array. The function should take the array, its size, and the element to search as parameters. First, sort the array in ascending order using for loop, then search for the element using for loop and return its index or message if not found. Print the sorted array and search result in the main function.



#include <stdio.h>

int sortAndSearch(int a[], int n, int key)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int a[50], n, i, key, pos;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = sortAndSearch(a, n, key);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    if(pos == -1)
        printf("\nElement not found");
    else
        printf("\nElement found at index %d", pos);

    return 0;
}

26. Write a C program using a function to replace all negative elements in an array with 0 (in-place). The function should take the array and its size as parameters. Use for loop and if condition inside the function to replace negative elements with 0. Print the modified array in the main function.


#include <stdio.h>

void replaceNegative(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
            a[i] = 0;
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    replaceNegative(a, n);

    printf("Modified array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


Write a C program using function to swap the first and last elements of an array. The function should take the array and its size as parameters. Use a temporary variable and simple swapping logic inside the function. Print the modified array in the main function.


#include <stdio.h>

void swapFirstLast(int a[], int n)
{
    int temp;
    temp = a[0];
    a[0] = a[n - 1];
    a[n - 1] = temp;
}

int main()
{
    int a[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    swapFirstLast(a, n);

    printf("Modified array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

28. Write a C program using a function to delete an element from a given position in an array by shifting elements. The function should take the array, its size, and the position to delete as parameters. Use for loop to shift elements and reduce the effective size of the array. Print the modified array in the main function.
#include <stdio.h>

void deletePos(int a[], int *n, int pos)
{
    int i;
    for(i = pos; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}

int main()
{
    int a[50], n, i, pos;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    deletePos(a, &n, pos);

    printf("Modified array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

29. Write a C program using separate functions to perform multiple operations on the same array: Find sum, maximum, and count even and odd numbers. Use for loop inside each function. Print results in main function.


#include <stdio.h>

int sum(int a[], int n)
{
    int i, s = 0;
    for(i = 0; i < n; i++)
        s += a[i];
    return s;
}

int max(int a[], int n)
{
    int i, m = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > m) m = a[i];
    return m;
}

void evenOdd(int a[], int n, int *e, int *o)
{
    int i;
    *e = *o = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0) (*e)++;
        else (*o)++;
    }
}

int main()
{
    int a[50], n, i, e, o;
    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    evenOdd(a, n, &e, &o);

    printf("Sum = %d\n", sum(a, n));
    printf("Max = %d\n", max(a, n));
    printf("Even = %d Odd = %d", e, o);
    return 0;
}

30. Write a C program using functions to find sum of even elements and product of odd elements. Use for loop.


#include <stdio.h>

int sumEven(int a[], int n)
{
    int i, s = 0;
    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0) s += a[i];
    return s;
}

int prodOdd(int a[], int n)
{
    int i, p = 1;
    for(i = 0; i < n; i++)
        if(a[i] % 2 != 0) p *= a[i];
    return p;
}

int main()
{
    int a[50], n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum of even = %d\n", sumEven(a, n));
    printf("Product of odd = %d", prodOdd(a, n));
    return 0;
}

Write a C program using function and while loop to perform multiple operations: sum of even, maximum, search, sort.


#include <stdio.h>

int main()
{
    int a[50], n, i = 0, sum = 0, max, key;
    scanf("%d", &n);

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;
    max = a[0];
    while(i < n)
    {
        if(a[i] % 2 == 0) sum += a[i];
        if(a[i] > max) max = a[i];
        i++;
    }

    printf("Sum of even = %d\nMax = %d\n", sum, max);
    return 0;
}

32. Write a C program using function and while loop to count even numbers, replace odd numbers with 0, and display array.


#include <stdio.h>

void modify(int a[], int n)
{
    int i = 0;
    while(i < n)
    {
        if(a[i] % 2 != 0)
            a[i] = 0;
        i++;
    }
}

int main()
{
    int a[50], n, i = 0, count = 0;
    scanf("%d", &n);

    while(i < n)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            count++;
        i++;
    }

    modify(a, n);

    printf("Even count = %d\nModified array:\n", count);
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
