#include <iostream>

using namespace std;

int main()
{
    int N, M, i, n, tomb[100], tumb[100], S=0, ujS=0, Sjegy, a=0;

    cout << "Elso tomb hossza: ";
    cin >> N;

    if (N > 100 || N < 0)
    {
        cout << "100-nal kissebb, 0-nal nagyobb szamot adjon meg!";
    }
    else
    {

        for (i=0; i<N; i++)
        {
            cout << "tomb[" << i << "]= ";
            cin >> tomb[i];
        }

        cout << "Masodik tomb hossza: ";
        cin >> M;

        if (M > 100 || M < 0)
        {
            cout << "100-nal kissebb, 0-nal nagyobb szamot adjon meg!";
        }
        else
        {
            for (i=0; i<M; i++)
            {
                cout << "tumb[" << i << "]= ";
                cin >> tumb[i];
            }

            if (N<=M)
            {
                n = N;
            }
            else
            {
                n = M;
            }
                for (i=0; i<n; i++)
                {
                    if (tomb[i]==tumb[i])
                    {
                        S = S + tomb[i];
                        a = a + 1;
                    }
                }

            while (S>0)
            {
                Sjegy = S % 10;
                S = S / 10;
                ujS = ujS * 10 + Sjegy;
            }

            if (a != 0)
            {
                cout << "A kozos elemek osszegenek tukorkepe: " << ujS;
            }
            else
            {
                cout << "Nincsenek kozos elemek.";
            }
        }
    }
    return 0;
}
