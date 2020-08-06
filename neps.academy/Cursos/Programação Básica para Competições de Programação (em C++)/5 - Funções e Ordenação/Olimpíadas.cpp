#include <bits/stdc++.h>

#define endl '\n';
#define MAX 110

using namespace std;

struct pais
{
    int ouro, prata, bronze, id;
};

int ordenacao(pais a, pais b)
{
    if (a.ouro != b.ouro)
    {
        return a.ouro > b.ouro;
    }
    if (a.prata != b.prata)
    {
        return a.prata > b.prata;
    }
    if (a.bronze != b.bronze)
    {
        return a.bronze > b.bronze;
    }
    return a.id < b.id;
}

int main()
{

    int n, m;
    int o, p, b;

    pais v[MAX];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        v[i].ouro = 0;
        v[i].prata = 0;
        v[i].bronze = 0;
        v[i].id = i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> o >> p >> b;
        v[o - 1].ouro++;
        v[p - 1].prata++;
        v[b - 1].bronze++;
    }

    sort(v, v + n, ordenacao);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].id;

        if (i >= n - 1)
        {
            cout << endl;
        }
        else
        {
            cout << ' ';
        }
    }

    return 0;
}