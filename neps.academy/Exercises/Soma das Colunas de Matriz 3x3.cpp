#include <bits/stdc++.h>

#define endl '\n';
#define MAX 10

using namespace std;

int main()
{
    int q[MAX][MAX];
    int i, j, n;
    int s, p;

    n = 3;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> q[j][i];

    s = 0;
    for (i = 0; i < n; i++)
    {
        s = 0;
        for (int j = 0; j < n; j++)
        {
            s += q[i][j];
        }
        cout << "Coluna " << i << ": " << s << endl;
    }

    return 0;
}