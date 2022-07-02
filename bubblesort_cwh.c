#include <stdio.h>

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ELEMENT IS : %d\n", a[i]);
    }
}

void bubblesort(int *a, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        // array is already sorted if it doesn't go in this loop
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    // int a[] = {12, 4, 45, 23, 55};
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    printarray(a, n);
    bubblesort(a, n);
    printf("Sorted Array : \n");
    printarray(a, n);
    return 0;
}