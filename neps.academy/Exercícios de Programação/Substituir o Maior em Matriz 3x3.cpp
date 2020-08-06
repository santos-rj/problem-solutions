#include <bits/stdc++.h>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{
    int q[MAX][MAX];
    int i, j, n, s;

    vector<int> v;

    n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> q[i][j];
            v.pb(q[i][j]);
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (q[i][j] == v[8])
                q[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << q[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}