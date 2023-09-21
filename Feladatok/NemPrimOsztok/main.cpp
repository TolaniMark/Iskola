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
        if (n %i == 0) //ha osztja
        {
            for( int b = 2; b < i; b++) //megmondjuk prim-e az oszto
            {
                if (i % b== 0)
                {
                    prim = false;
                }
            }
        }
        if (prim == false && i % 2 != 0)// ha teljesülnek a feltételek, kiirjuk
        {
            cout << i << " ";
        }
    }
    return 0;
}
