#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int n, a = 0;
    string r, g;

    cin >> n >> g >> r;

    for (int i = 0; i < n; i++)
    {
        if (r[i] == g[i])
        {
            a++;
        }
    }

    cout << a << endl;

    return 0;
}