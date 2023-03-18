#include <iostream>

using namespace std;

int main()
{
    int n, i, S, lkkt, tomb[100], min1, min2, min3, max1, max2;
    cout << "(5 < n < 100)" << endl;
    cout << "n= ";
    cin >> n;

    for (i=0; i<n; i++)
    {
        cout << "tomb[" << i << "]= ";
        cin >> tomb[i];
    }

    min1 = tomb[0];
    min2 = tomb[1];
    min3 = tomb[2];
    max1 = tomb[3];
    max2 = tomb[4];

    for (i=0; i<n; i++)
    {

        if(max1 < tomb[i])
        {
            max2 = max1;
            max1 = tomb[i];
        }
        else
        {
            if(max2 < tomb[i] && tomb[i] != max1)
            {
                max2 = tomb[i];
            }
        }

        if(min1 > tomb[i])
        {
            min3 = min2;
            min2 = min1;
            min1 = tomb[i];
        }
        else
        {
            if(min2 > tomb[i] && tomb[i] != min1)
            {
                min3 = min2;
                min2 = tomb[i];
            }
            else
            {
                if(min3 > tomb[i] && tomb[i] != min1 && tomb[i] != min2)
                    min3 = tomb[i];
            }
        }
    }

    lkkt = min3 * max2;

    while(min3 != max2)
    {
        if(min3 < max2)
        {
            max2 -= min3;
        }
        else
        {
            min3 -= max2;
        }
    }

    lkkt /= min3;

    cout << "lkkt - lnko = " << lkkt - min3;

    return 0;
}
