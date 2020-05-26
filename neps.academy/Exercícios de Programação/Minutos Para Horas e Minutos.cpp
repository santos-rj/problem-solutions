#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int m, h;

    cin >> m;

    h = m / 60;

    m = m - (h * 60);

    cout << h << '\n'
         << m << endl;

    return 0;
}