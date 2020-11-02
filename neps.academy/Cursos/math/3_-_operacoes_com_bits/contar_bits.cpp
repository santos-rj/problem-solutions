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

int count_bits(ll a)
{

    int cont = 0;

    while (a != 0)
    {
        ++cont;
        a -= a & -a;
    }

    return cont;
}

void solve()
{

    ll n;

    cin >> n;

    cout << count_bits(n) << endl;
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