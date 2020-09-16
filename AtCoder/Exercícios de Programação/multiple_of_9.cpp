//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                    \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define MAXN 1005
#define MAXV 1010
#define ff first
#define ss second

typedef long long ll;
typedef long int li;

using namespace std;

void solve()
{
    string num;
    ll ans = 0;

    cin >> num;

    int tamanho = num.size();

    for (ll i = 0; i < tamanho; i++)
        ans += (num[i] - 48);

    if (ans % 9 == 0 || ans == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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