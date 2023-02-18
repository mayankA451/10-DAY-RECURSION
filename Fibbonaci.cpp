#include <iostream>
using namespace std;

int Fibbo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int ans = Fibbo(n - 1) + Fibbo(n - 2);
    return ans;
}

int main()
{

    int n;
    cin >> n;

    Fibbo(n);

    return 0;
}