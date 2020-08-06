#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    char n;
    double a, b, r;

    cin >> n >> a >> b;
    if (n == 'M')
    {
        r = a * b;
    }
    else
    {
        r = a / b;
    }

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << r << endl;

    return 0;
}