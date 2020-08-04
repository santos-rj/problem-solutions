#include <iostream>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

typedef long long ll;

ll mds(ll a, ll b)
{
    if (!b)
        return a;
    return mds(b, a % b);
}

int main()
{

    desync;

    ll m, n;

    cin >> m >> n;

    while (mds(m, n) != 1)
        n--;

    cout << n << endl;

    return 0;
}