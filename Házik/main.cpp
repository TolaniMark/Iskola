#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int N, i, atlag=0, maX, Grr=0, S=1, k, tomb[100];

    cout << "tomb elemeinek szama: ";
    cin >> N;

    ifstream myfile("input.txt");

    for(i=0; i<N; i++) {
    myfile >> tomb[i];
    atlag += tomb[i];
    if (i == 0 || tomb[i] > maX)
        maX = tomb[i];
}
    myfile.close();

    atlag /= N;

    Grr = atlag;
    k = maX;


    while (maX>0)
    {
        S*=10;
        maX /= 10;
    }

    Grr = Grr * S + k;

    maX = 1;

    maX = Grr/2;
    while(Grr%maX!=0)
    {
       maX--;
    }
    cout << maX;

    if (maX == 1)
        cout << Grr << " egy prim";
    else
    {
        ofstream yourfile ("oszto.out");
        yourfile << maX;
        yourfile.close();
    }

    return 0;
}








