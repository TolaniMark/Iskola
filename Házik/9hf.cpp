#include <iostream>
using namespace std;

void cuburi(int n) {
    if (n > 0) {
        cout << n * n * n << " ";
        n--;
        cuburi(n);
    }
}

int main()
{
    int n;
    cin >> n;
    cuburi(n);
    return 0;
}

