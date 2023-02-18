#include <iostream>
using namespace std;

bool Found(int *arr, int size, int n)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == n)
    {
        return true;
    }
    else
    {
        bool remaining = Found(arr + 1, size - 1, n);
        return remaining;
    }
}

int main()
{
    int arr[5] = {3, 4, 7, 8, 4};
    int value = 9;
    int size = 5;

    bool ans = Found(arr, size, value);
    if (ans)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    return 0;
}