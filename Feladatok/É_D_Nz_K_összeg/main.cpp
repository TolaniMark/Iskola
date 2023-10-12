#include <iostream>
#include <fstream>

//megoldas 4 valtozoval

using namespace std;

int main()
{
    int N, E=0, D=0, K=0, Ny=0;
    ifstream myfile("input.txt");
    myfile >> N;

    int constantin[N][N];

    for (int sor=0; sor<N; sor++)
    {
        for (int oszlop=0; oszlop<N; oszlop++)
        {
            myfile >> constantin [sor][oszlop];

            if (sor<oszlop && sor+oszlop>N-1)
            {
                K += constantin[sor][oszlop];
            }
            if (sor<oszlop && sor+oszlop<N-1)
            {
                E += constantin[sor][oszlop];
            }
            if (sor>oszlop && sor+oszlop>N-1)
            {
                D += constantin[sor][oszlop];
            }
            if (sor>oszlop && sor+oszlop<N-1)
            {
                Ny += constantin[sor][oszlop];
            }
        }
    }
    myfile.close();
    cout << "E= " << E << endl << "D= " << D << endl << "K= " << K << endl << "Ny= " << Ny;

    return 0;
}
