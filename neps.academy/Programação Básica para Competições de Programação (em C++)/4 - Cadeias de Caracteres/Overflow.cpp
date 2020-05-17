#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int n, p, q, r;
    char c;

    cin >> n >> p >> c >> q;

    if (c == '+')
    {
        r = p + q;
    }
    else
    {
        r = p * q;
    }

    if (r > n)
    {
        cout << "OVERFLOW" << endl;
    }
    else
    {
        cout << "OK" << endl;
    }

    return 0;
}