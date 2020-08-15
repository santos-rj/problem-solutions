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

void solve()
{
    ll l, r, d;
    cin >> l >> r >> d;

    if (r > 50 && l < r && r > d)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }
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