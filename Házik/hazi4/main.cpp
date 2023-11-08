#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int N, K=0, Ny=0;

    ifstream myfile("input.txt");
    myfile >> N;
    int godot[N][N];

    for (int sor=0; sor<N; sor++)
    {
        for (int oszlop=0; oszlop<N; oszlop++)
        {
            myfile >> godot[sor][oszlop];

            if (sor>oszlop && sor+oszlop<N-1)
            {
                Ny += godot[sor][oszlop];
            }

            if (sor<oszlop && sor+oszlop>N-1)
            {
                K += godot[sor][oszlop];
            }
        }
    }
    myfile.close();

    while(K != Ny)
    {
        if (K<Ny)
            Ny-=K;
        else
            K-=Ny;
    }
    fstream yourfile("lnko.out");
    yourfile << K;
    yourfile.close();

    return 0;
}


//      00   01   02
// Ny   10   11   12  K
//      20   21   22
