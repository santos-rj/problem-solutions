#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int a, r;
    cin >> a;

    r = a - 9;

    if (a < 9)
        r = 24 + r;

    cout << r << endl;

    return 0;
}