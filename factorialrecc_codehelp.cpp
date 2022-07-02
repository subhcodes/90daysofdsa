#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "ENTER A NUMBER : " << endl;
    cin >> n;
    cout << "FACTORIAL OF THE NUMBER : " << factorial(n);

    return 0;
}