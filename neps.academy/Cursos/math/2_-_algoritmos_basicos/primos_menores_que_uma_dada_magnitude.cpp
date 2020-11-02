#include <bits/stdc++.h>

#define desync                    \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)
#define endl "\n"
#define pb push_back
#define MAX 10
#define MAXV 1010
#define ff first
#define ss second

typedef long long ll;

using namespace std;

bool e_primo(ll x)
{
    if (x == 1 || x == 4)
        return 0;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    ll x;
    cin >> x;

    for (ll j = 1; j <= x; ++j)
    {
        if (e_primo(j))
        {
            cout << j << ' ';
        }
    }

    cout << endl;
}

int main()
{

    desync;

    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}