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

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

ll lmc(ll a, ll b)
{
    return a * b / gcd(a, b);
}

void solve()
{
    ll a, b, c, d, mmc = 0, soma = 0, mdc = 0;

    cin >> a >> b >> c >> d;

    mmc = lmc(b, d);

    soma = (((mmc / b) * a) + ((mmc / d) * c));

    mdc = gcd(soma, mmc);

    cout << soma / mdc << ' ' << mmc / mdc << endl;
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