#include <bits/stdc++.h>

#define endl '\n';
#define MAX 1000
#define INF 0x3f3f3f3f

using namespace std;

int main()
{

    long int n, m = -INF;
    long int tab[MAX][MAX], row[MAX], col[MAX];

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> tab[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            row[i] += tab[i][j];

    for (int j = 0; j < n; j++)
        for (int i = 0; i < n; i++)
            col[j] += tab[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            m = max(m, row[i] + col[j] - 2 * tab[i][j]);

    cout << m << endl;

    return 0;
}

long int max(double a, double b)
{

    int maior;

    if (a > b)
    {
        maior = a;
    }
    else
    {
        maior = b;
    }
    return maior;
}