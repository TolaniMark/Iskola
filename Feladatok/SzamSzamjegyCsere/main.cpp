#include <iostream>

using namespace std;

int main()
{
    int n, x, p;
    int hatvany=1, aux = 0, pos = 0;

    cout << "n= ";
    cin >> n;
    cout << endl << "(0<x<10) x= ";
    cin >> x;
    cout << "(szamjegyek szamaig) p= ";
    cin >> p;

    while (n>0)
    {
        int szamjegy = n%10;
        n=n/10;

        if (pos != p)
        {
            aux = aux + szamjegy * hatvany;
        }
        else
        {
            aux = aux + x * hatvany;
        }
        hatvany *= 10;
        pos++;
    }
    cout << aux << endl;

    return 0;
}
