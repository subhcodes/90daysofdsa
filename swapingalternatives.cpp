#include <iostream>
using namespace std;

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        ;
    }
}

void swap(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            // int temp = arr[i];
            // arr[i] = arr[i+1];
            // arr[i+1] = temp;
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    swap(arr, n);
    printarray(arr, n);
    return 0;
}