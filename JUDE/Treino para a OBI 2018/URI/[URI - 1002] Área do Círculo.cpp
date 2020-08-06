#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    double raio = 0, area = 0, pi = 3.14159;

    cin >> raio;

    area = pi * (raio * raio);

    cout << fixed;
    cout << "A=" << setprecision(4) << area << endl;

    return 0;
}