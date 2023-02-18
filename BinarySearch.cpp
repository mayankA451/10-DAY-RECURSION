#include <iostream>
using namespace std;

bool BinarySearch(int *arr, int start, int end, int k)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return BinarySearch(arr, mid + 1, end, k);
    }
    else
    {
        return BinarySearch(arr, start, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 16;

    cout << "Present Or Not " << BinarySearch(arr, 0, 5, key) << endl;

    return 0;
}