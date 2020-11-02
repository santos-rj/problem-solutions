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
    int n;
    cin >> n;
    vector<li> nums;

    for (int i = 0; i < n; i++)
    {
        li in;
        cin >> in;
        nums.pb(in);
    }

    ll maior = nums[0];

    for (int i = 0; i < n; ++i)
        maior = maior | nums[i];

    cout << maior << endl;
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