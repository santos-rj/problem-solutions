#include <bits/stdc++.h>
using namespace std;

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define MAXN 10005
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define pb push_back
#define endl '\n'
#define ss second
#define ff first

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> matriz;

int main()
{
    desync;

    ll p, s, inicio, fim;
    vector<pair<ll, ll>> v, z;

    cin >> p >> s;

    for (int i = 0; i < s; i++)
    {

        cin >> inicio >> fim;

        v.pb(make_pair(inicio, fim));
    }

    sort(v.begin(), v.end());
    z.pb(v.front());

    for (int i = 1; i < s; i++)
    {
        if (v[i].ff <= z.back().ss)
            z.back().ss = max(z.back().ss, v[i].ss);
        else
            z.pb(v[i]);
    }

    for (int i = 0; i < z.size(); i++)
    {
        cout << z[i].first << ' ' << z[i].second << endl;
    }

    return 0;
}