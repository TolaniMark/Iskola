#include <iostream>

using namespace std;

int main()
{//tomb beolv
    int tomb [100];
    int i, n, j, aux;
    cout << "n=";
    cin >> n;

    for(i=0; i<n; i++)
    {
        cout << "tomb[" << i << "]=";
        cin >> tomb[i];
    }
    for (i=0; i<n; i++)
    {
        cout << tomb[i] << " ";
    }
    cout << endl;

    //bub rend
    bool csere;
    int k = 1;

    do //do-while ciklus eleje
    {
        csere = false;
        for(i=0; i<n-k; i++)
        {
            if (tomb[i] > tomb[i+1])
            {
                swap(tomb[i],tomb[i+1]);
                csere = true;
            }
        }
        k++;
    }
    while (csere); // ciklus vege
// bub rend vege
    for(i=0; i<n; i++)
        cout << tomb[i] << " ";

    return 0;
}
