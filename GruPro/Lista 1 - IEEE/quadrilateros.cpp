//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                    \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)
#define endl '\n'
#define MAX 1e15 + 5
#define INF 0x3f3f3f3f
#define MAXV 2000
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef long int li;

using namespace std;

void solve()
{
    int a = 0, b = 0, c = 0, d = 0, w = 0, x = 0, y = 0, z = 0;

    cin >> a >> b >> c >> d >> w >> x >> y >> z;

    if ((a == b) && (b == c) && (c == d))
    {
        if ((w == x) && (x == y) && (y == z))
        {
            cout << "Quadrado.\n";
        }
        else if ((w == z) && (x == y))
        {
            cout << "Losango.\n";
        }
        else
        {
            cout << "Nenhuma das formas procuradas.\n";
        }
    }
    else if (((a == d) && (c == b)) && ((w == z) && (x == y)))
    {
        cout << "Retangulo.\n";
    }
    else
    {
        cout << "Nenhuma das formas procuradas.\n";
    }
}

int main()
{

    desync;

    ll t = 1;

    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}