#include <iostream>

using namespace std;

int main()
{
    int n;
    bool prim;

    cout << "n= ";
    cin >> n;

    for (int i = n - 1; i >= 1; i--)
    {
        prim = true;
        if (n%i==0)
        {
            for( int b = 2; b < i; b++)
            {
                if (i % b== 0)
                {
                    prim = false;
                }
            }
        }
        if (prim == false && i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
