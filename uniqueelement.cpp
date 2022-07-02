#include <iostream>
using namespace std;

int unique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {3, 7, 2, 2, 7, 2, 1};
    int size = 7;
    cout << unique(arr, size);
    return 0;
}