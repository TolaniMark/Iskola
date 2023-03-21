#include <iostream>

using namespace std;

int main()
{
    int tomb[100];
    int i, n, aux;
    cout << "n= ";
    cin >> n;
    for (i=0; i<n; i++)
    {
        cout << "tomb[" << i << "]=";
        cin >> tomb[i];
    }
    for (i=0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (tomb[i] > tomb[j])
            {
                aux = tomb[j];
                tomb[j] = tomb[i];
                tomb[i] = aux;
            }
        }
    }
    for (i=0; i< n-1; i++)
    {
        cout << tomb[i] << " ";
    }
    return 0;
}
