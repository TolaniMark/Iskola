#include <iostream>

using namespace std;

int main()
{
    int szamI, szamII, lkkt;

    cout << "szamI= ";
    cin >> szamI;
    cout << "szamII= ";
    cin >> szamII;

    lkkt= szamI*szamII;

    while(szamI!=szamII)
    {
        if(szamI>szamII)
        {
            szamI=szamI-szamII;
        }
        else
        {
            szamII=szamII-szamI;
        }
    }
    lkkt = lkkt / szamI;

    cout << "a legnagyobb kozos oszto " << szamI << endl;
    cout << "a legkisebb kozos tobbszoros " << lkkt << endl;

    return 0;
}
