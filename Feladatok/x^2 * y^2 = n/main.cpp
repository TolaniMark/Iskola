#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    int S, x1, y1;
    bool p = true;

    cout << "n= ";
    cin >> n;


    for (x=n-1; x>1; x--)
    {
        for (y=x; y<n; y++)
        {
            S = x * x * y * y;
            if (S == n)
            {
                p = false;
                x1 = x;
                y1 = y;
            }
        }
    }
    if (p)
    {
        x1 = 0;
        y1 = 0;
    }
    cout << " x = " << x1 << endl << "y = " << y1;


    return 0;
}
