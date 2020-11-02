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
    ll n, in, ans;
    vector<ll> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.pb(in);
    }

    sort(v.begin(), v.end(), greater<int>());

    ans = v[0];

    for (int i = 1; i < n; i++)
    {
        ans = gcd(ans, v[i]);
    }

    cout << ans << endl;
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