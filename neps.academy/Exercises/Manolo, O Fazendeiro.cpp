#include <iostream>
#include <string>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';
#define MAX 50
#define INF 0x3f3f3f3f
#define pb push_back

using namespace std;

typedef long long ll;

int main()
{

    desync;

    ll n, q, li, ci, lf, cf, i, j, k, soma = 0, tab[MAX][MAX];

    cin >> n;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> tab[i][j];

    cin >> q;

    for (i = 0; i < q; i++)
    {
        cin >> li >> ci >> lf >> cf;

        for (k = li - 1; k < lf; k++)
            for (j = ci - 1; j < cf; j++)
            {
                soma += tab[k][j];
                tab[k][j] = 0;
            }
    }

    cout << soma << endl;

    return 0;
}