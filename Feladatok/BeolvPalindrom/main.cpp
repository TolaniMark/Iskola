#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    //szukseges valtozok deklaralasa
    int v[100],m[100],i=0,n,k,a;
    //input file deklaralasa - az ifstream azt jelenti, hogy csak olvasni tudunk belole
    ifstream file("input.txt");
    //ha sikerult megnyitni a filet
    if(file.is_open())
    {
        //olvassuk be soronkent a line valtozoba
        while(file >> v[i])
        {
            //noveljuk az i erteket - ez fogja szamolni, hogy hany erteket olvastunk be
            i++;
        }
        //input file bezarasa
        file.close();
    }
    else
    {
        cout<<"nem tudtam megnyitni";
    }
    //lementjuk a beolvasott valtozok szamat,
    n=i;
    for (i=0; i<n; i++)
    {
        a=v[i];
        m[i]=0;
        //a szamot lebontjuk szamjegyekre s mentjuk az m[i] ben
        while (a>0)
        {
            k=a%10;
            m[i]=m[i]*10+k;
            a=a/10;
        }
    }

    //output file deklaralasa - az ofstream akkor is letrehozza a filet, ha az addig nem letezett
    ofstream ofile;
    ofile.open("output.txt");
    for (i=0; i<n; i++)
    {
        //ha a ket szam a tombokben egyezik, akkor palindromot fog kiirni az output file ba, ha nem, akkor azt, hogy nem palindrom
        if (v[i]==m[i])
        {
            ofile << m[i] << " palindrom " << endl;
        }
        else
        {
            ofile << m[i] << " nem palindrom" << endl;
        }
    }
    //output file bezarasa
    ofile.close();
    return 0;
}
