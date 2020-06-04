#include <iostream>
#include <cmath>

#define endl '\n'

using namespace std;

int main()
{

    double base = 0, expoente = 0;

    cin >> base >> expoente;

    cout.precision(4);

    cout << fixed << pow(base, expoente) << endl;

    return 0;
}