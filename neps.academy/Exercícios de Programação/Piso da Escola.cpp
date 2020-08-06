#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int l, c;

    cin >> l >> c;

    cout << l * c + (l - 1) * (c - 1) << endl;
    cout << 2 * (l - 1) + 2 * (c - 1) << endl;

    return 0;
}