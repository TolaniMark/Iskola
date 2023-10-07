#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int N, sor, oszlop, constantine=0, maria=0;

    ifstream myfile("input.txt");
    myfile >> N;

    int M[N][N];

    for (sor=0; sor < N; sor++)
    {
        for (oszlop=0; oszlop < N; oszlop++)
        {
            myfile >> M[sor][oszlop];

            if (sor != oszlop && oszlop > sor)
            {
                constantine = constantine + M[sor][oszlop];
            }

            if (sor != oszlop && oszlop < sor)
            {
                maria = maria + M[sor][oszlop];
            }
        }
    }
    myfile.close();

    N = constantine * maria;
    while (constantine != maria)
    {
        if (constantine > maria)
            constantine -= maria;
        else
            maria -= constantine;
    }
    ofstream yourfile("lkkt.out");
    yourfile << N / maria;
    yourfile.close();

    return 0;
}
