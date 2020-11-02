// Author: Rafael Santos
// Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define MAXN 10005
#define INF 0x3f3f3f3f

using namespace std;

typedef long int li;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

struct agenda
{
    int inicio, fim;
};

bool compara(agenda a, agenda b)
{
    return a.fim < b.fim;
}

agenda consulta[MAXN];

void solve()
{
    int n = 0, livre = 0, cont = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> consulta[i].inicio >> consulta[i].fim;
    }

    sort(consulta + 1, consulta + n + 1, compara);

    for (int i = 1; i <= n; i++)
    {
        if (consulta[i].inicio >= livre)
        {
            cont++;
            livre = consulta[i].fim;
        }
    }

    cout << cont << endl;
}

int main()
{
    int t = 1;

    //cin >> t;

    while (t--)
    {
        solve();
    }
}