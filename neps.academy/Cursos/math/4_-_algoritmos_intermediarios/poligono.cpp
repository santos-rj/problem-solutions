#include <bits/stdc++.h>

#define desync                    \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)
#define endl "\n"
#define pb push_back
#define MAX 1300005
#define MAXV 1010
#define ff first
#define ss second

typedef long long ll;
typedef long int li;

using namespace std;

void solve()
{
    ll n, in, ans = 0, sum = 0;
    vector<ll> v;

    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> in;
        v.pb(in);
    }

    sort(v.begin(), v.end());

    for (ll i = 0; i < n; i++)
    {
        if (sum > v[i])
            ans = max(ans, i + 1);
        sum += v[i];
    }
    cout << ans << endl;
}

int main()
{

    desync;

    ll t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}