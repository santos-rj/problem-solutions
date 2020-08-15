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

using namespace std;

bool composto[MAX];
vector<ll> primos;

void crivo(int n)
{
    composto[1] = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (!composto[i])
        {
            primos.pb(i);
            for (int j = 2; j * i <= n; ++j)
            {
                composto[j * i] = 1;
            }
        }
    }

    return;
}

void solve()
{
    ll in;
    cin >> in;

    cout << upper_bound(primos.begin(), primos.end(), in) - primos.begin() << endl;
}

int main()
{

    desync;

    ll t = 1;
    cin >> t;

    crivo(MAX);

    while (t--)
    {
        solve();
    }

    return 0;
}