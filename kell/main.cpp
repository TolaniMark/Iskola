#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, c;

    ifstream myfile("input.txt");
    ofstream yourfile("output.txt");

    myfile >> a;
    myfile >> b;

    c = a + b;

    yourfile << c;

    cout << a << " + " << b << " = " << c;

    myfile.close();
    yourfile.close();

    return 0;
}
