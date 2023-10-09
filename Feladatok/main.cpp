#include <iostream>

using namespace std;

int main()
{
    int sor, oszlop, sorszam, oszlopszam;

    cout << "sorszam= ";
    cin >> sorszam;
    cout << "oszlopszam= ";
    cin >> oszlopszam;

    int A[sorszam][oszlopszam];

    for (sor=0; sor<sorszam; sor++)
    {
        for (oszlop=0; oszlop<oszlopszam; oszlop++)
        {
            cout << "A[" << sor << "][" << oszlop << "]= ";
            cin >> A[sor][oszlop];

            if (sor==oszlop)
            {
                A[sor][oszlop] = 0;
            }
            if (sor>oszlop)
            {
                A[sor][oszlop] = -A[sor][oszlop];
            }
        }
    }
    for (sor=0; sor<sorszam; sor++)
    {
        for (oszlop=0; oszlop<oszlopszam; oszlop++)
        {
            cout << A[sor][oszlop] << " ";
        }
        cout << endl;
    }
    return 0;
}
