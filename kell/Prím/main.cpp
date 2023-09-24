#include <iostream>

using namespace std;
main ()
{
    int i, n, S=0;
    bool prim = true;

    cout << "n= ";
    cin >> n;

    for (i = 2; i <= n/2; i++)
    {
        if (n%i == 0)
        {
            prim = false;
            S++;
        }
    }

    if (prim)
    {
        cout << n << " egy primszam";
    }
    else
    {
        cout << n << " nem primszam" << endl;
        cout << "osztoinak szama: " << S;
    }
    return 0;
}
