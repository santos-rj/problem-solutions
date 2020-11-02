#include <bits/stdc++.h>

#define endl '\n';
#define MAX 10

using namespace std;

int main()
{
    int q[MAX][MAX];
    int i, j, n;
    int s, p;

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> q[i][j];

    s = 0;
    for (i = 0; i < n; i++)
        s += q[0][i];

    for (i = 1; i < n && s != -1; i++)
    {
        p = 0;
        for (j = 0; j < n; j++)
            p += q[i][j];
        if (p != s)
            s = -1;
    }

    for (j = 0; j < n && s != -1; j++)
    {
        p = 0;
        for (i = 0; i < n; i++)
            p += q[i][j];
        if (p != s)
            s = -1;
    }

    p = 0;
    for (i = 0; i < n && s != -1; i++)
        p += q[i][i];
    if (p != s)
        s = -1;

    p = 0;
    for (i = 0; i < n && s != -1; i++)
        p += q[i][n - i - 1];
    if (p != s)
        s = -1;

    cout << s << endl;

    return 0;
}