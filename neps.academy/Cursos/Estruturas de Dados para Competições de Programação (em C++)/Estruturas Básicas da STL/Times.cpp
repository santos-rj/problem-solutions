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

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> matriz;

int main()
{
    desync;

    int n, t;
    int aux;
    string nome;
    ll hab;

    vector<pair<ll, string>> v;
    vector<string> t1, t2, t3;

    cin >> n >> t;

    for (int i = 0; i < n; i++)
    {
        cin >> nome >> hab;
        v.pb(make_pair(hab, nome));
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < t; i++)
    {
        for (int j = i; j < n; j += t)
        {
            t1.pb(v[j].second);
        }

        sort(t1.begin(), t1.end());

        aux = t1.size();

        cout << "Time " << i + 1 << endl;
        for (int z = 0; z < aux; z++)
            cout << t1[z] << endl;
        cout << endl;

        t1.clear();
    }

    return 0;
}