#include <iostream>

using namespace std;

int main()
{
    int F, prev, current, n, index;

    cout << "n=";
    cin >> n;

    prev = 1;
    current = 1;

    for(index=3; index<=n; index++)
    {
        F = current + prev;
        prev = current;
        current = F;
    }
    cout << F;
}
