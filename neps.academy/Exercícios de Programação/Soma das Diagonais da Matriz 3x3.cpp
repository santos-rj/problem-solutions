#include <bits/stdc++.h>

#define endl '\n';
#define MAX 10

using namespace std;

int main()
{
    int q[MAX][MAX];
    int i, j, n;
    int s;

    n = 3;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> q[j][i];

    s = 0;
    for (i = 0; i < n && s != -1; i++)
        s += q[i][i];
    cout << "Diagonal principal: " << s << endl;

    s = 0;
    for (i = 0; i < n && s != -1; i++)
        s += q[i][n - i - 1];
    cout << "Diagonal secundaria: " << s << endl;

    return 0;
}