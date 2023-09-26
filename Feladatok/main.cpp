#include <iostream>

using namespace std;

int main()
{
    int n, i, j, s=0;

    cout << "n= ";
    cin >> n;

    for(i = 9; i<n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if (i % j == 0 && j % 2 != 0)
                s++;
        }

        if (s == 3)
        {
            cout << i << " ";
        }
        s=0;
    }
    return 0;
}
