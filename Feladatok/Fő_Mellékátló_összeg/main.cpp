#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int N, F=0, M=0;
    ifstream myfile("input.txt");
    myfile >> N;

    int constantin[N][N];

    for (int sor=0; sor<N; sor++)
    {
        for (int oszlop=0; oszlop<N; oszlop++)
        {
            myfile >> constantin[sor][oszlop];

            if (sor == oszlop)
                F += constantin[sor][oszlop];

            if (sor+oszlop==N-1)
                M += constantin[sor][oszlop];
        }
    }
    myfile.close();
    cout << "M= " << M << endl << "F= " << F;

    return 0;
}
