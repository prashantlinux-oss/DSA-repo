13. //Write a C program using function to count positive, negative, and zero elements in an array. The function should take the array and its size as parameters and return three values (positive, negative, zero counts using pointers or struct). Use for loop and if-else conditions inside the function. Print the counts in the main function.


#include <stdio.h>

void countPNZ(int a[], int n, int *p, int *ne, int *z)
{
    int i;
    *p = *ne = *z = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
            (*p)++;
        else if(a[i] < 0)
            (*ne)++;
        else
            (*z)++;
    }
}

int main()
{
    int a[50], n, i, p, ne, z;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    countPNZ(a, n, &p, &ne, &z);
    printf("Positive = %d\nNegative = %d\nZero = %d", p, ne, z);
    return 0;
}