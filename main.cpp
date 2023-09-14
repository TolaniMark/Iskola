#include <iostream>

using namespace std;

int main()
{
    int tomb [100];
    int i, n, j, aux;
    cout << "n=";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "tomb[" << i << "]=";
        cin >> tomb[i];
    }
    for (i=0; i<n; i++){
        cout << tomb[i] << " ";
    }
    cout << endl;
    //tomb beolvasvasas es kiiras, eddig

    for (i=0; i< n-1; i++)
        {
            for (j=i+1; j< n; j++)
            {
                if ( tomb[i]> tomb[j])
                {
                 //poharas cucc
                    aux= tomb[j];
                    tomb[j]= tomb[i];
                    tomb[i]=aux;
                }
            }
        }
    for(i=0; i<n; i++)
    cout << tomb[i] << " ";
//tagok sorrendbe tetele es kiirasa


    return 0;
}

