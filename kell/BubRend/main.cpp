#include <iostream>

using namespace std;

int main()
{
    int i, j, v[100], aux, n, k=0, p=0;

    cout<<"n=";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout << "v["<<i<<"]=";
        cin >> v[i];
    }

    do
    {
        p=0;

        for (i=0; i<n-1-k; i++)
        {
            if (v[i]>v[i+1])
            {
                aux=v[i+1];
                v[i+1]=v[i];
                v[i]=aux;

                p=1;
            }
        }
        k++;
    }
    while(p==1);

    for (i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
