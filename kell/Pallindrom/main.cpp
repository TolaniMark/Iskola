#include <iostream>

using namespace std;

int main()
{
    int szam, szamjegy, ujszam=0, tmp;
    cout << "szam= ";
    cin >> szam;
    tmp=szam;

    while (szam > 0)
    {

        szamjegy = szam % 10;
        szam = szam / 10;
        ujszam = ujszam * 10 + szamjegy;
    }
    if (tmp == ujszam)
    {
        cout << "A szam pallindrom.";
    }
    else
    {
        cout << "A szam nem pallimdrom.";
    }
    return 0;
}
