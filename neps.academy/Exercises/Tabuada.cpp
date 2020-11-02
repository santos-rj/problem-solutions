#include <bits/stdc++.h>

#define endl '\n'
#define forn(x) for (int i = 0; i < x; i++)

using namespace std;

int main()
{

    int x;

    cin >> x;

    forn(10)
    {
        cout << x << " * " << i + 1 << " = " << x * (i + 1) << endl;
    }

    return 0;
}