// Author: Rafael Santos
// Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define MAXN 10005
#define INF 0x3f3f3f3f

using namespace std;

typedef long int li;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

void solve()
{
    int a, count = 0, i = 0;
    cin >> a;
    vector<int> fat;

    fat.pb(1);
    fat.pb(1);

    for (i = 2; i <= 8; i++)
        fat.pb(fat[i - 1] * i);

    for (i = 8; a > 0; i--)
    {
        if (a >= fat[i])
        {
            a -= fat[i];
            count++;
            i = 8;
        }
    }

    cout << count << endl;
}

int main()
{

    int t = 1;

    // cin >> t;

    while (t--)
    {
        solve();
    }
}