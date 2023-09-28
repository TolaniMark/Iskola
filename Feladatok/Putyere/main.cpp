#include <iostream>

using namespace std;

int main()
{
    int n, x=2, p=0, k=1;

    cout << "n= ";
    cin >> n;

    for (x=2; x<=n; x++)
    {
        if (n % x == 0)
        {
            while(k<n)
            {
                k = k * x;
                p++;
            }
            if (k==n)
            {
                break;
            }
        }
    }
    cout << "x= " << x << endl << "p= " << p;
    return 0;
}
