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

void solve()
{
    ll p, d1, d2;
    cin >> p >> d1 >> d2;

    if (p == 0)
    {
        if ((d1 + d2) % 2 == 0)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    else
    {
        if ((d1 + d2) % 2 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
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