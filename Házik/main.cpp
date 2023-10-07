#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, i, szj;
    int N;

    ifstream myfile ("input.txt");
    myfile >> N;
    myfile.close();

    x = N % 10;

     while (N > 0)
    {
        N = N / 10;
        szj = N % 10;

        if (szj >= x)
            x = szj;
    }

    int prev = 1,  current= 1;

    fstream yourfile ("fib.out");

    if (x == 1 || x == 2)
    yourfile << 1;

    else
    {
    for(i=3; i<=x; i++)
    {
        N = current + prev;
        prev = current;
        current = N;
    }


    yourfile << N;
    }
    yourfile.close();

    return 0;
}
