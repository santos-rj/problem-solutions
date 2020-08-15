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

bool composto[10000010];

void crivo(ll n)
{
    composto[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (!composto[i])
        {
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

    crivo(in);

    for (int i = 1; i <= in; ++i)
    {
        if (composto[i] == 0)
        {
            cout << i << ' ';
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