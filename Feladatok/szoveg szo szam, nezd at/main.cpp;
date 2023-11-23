#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("szoveg.txt");
    ifstream szo ("szavak.txt");
    ofstream out ("output.txt");
    string sor, szavak[20];
    int i = 0, szam[20]= {0};
    while(szo >> szavak[i])
    {
        i++;
    }
    int n=i;
    while (getline(in, sor))
    {
        for(i=0; i<n; i++)
        {
            size_t found = sor.find(szavak[i]);
            int nr =0;
            while (found!=string::npos)
            {
                nr++;
                found = sor.find(szavak[i], found + 1);
            }
            szam[i] += nr;
        }
    }
    for(i = 0; i<n ; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if (szam[i] > szam[j])
            {
                swap (szam[i],szam[j]);
                swap(szavak[i], szavak[j]);
            }
        }
    }
    for (i = n-1; i>=0; i--)
    {
        out << szavak[i] << " " << szam[i] << endl;
    }
    out.close();

    return 0;
}
