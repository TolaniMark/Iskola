#include <iostream>

using namespace std;

int main()
{
    int i, a, max=-1000, min=1000,n, nr=0;
    cout << "n= ";
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cout << i << ".szam: ";
        cin >> a;
        if (a>max)
        {
            max=a;
        }
        if (a<min)
        {
            min=a;
        }
        if (a==0)
        {
            nr++;
        }
    }
    cout << "max= "<< max << endl;
    cout << "min= "<< min << endl;
    cout << "nullak szama:" << nr << endl;

    return 0;
}
