#include <iostream>
#include <set>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 100002
#define pb push_back

using namespace std;

typedef long long ll;

set<ll> ilhas[MAX];

ll i;

int main()
{

    desync;

    ll n, m, a, b, t;

    cin >> n >> m;

    while (m--)
    {
        cin >> t >> a >> b;

        if (t == 0)
        {
            if (ilhas[a].find(b) != ilhas[a].end())
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            ilhas[a].insert(b);
            ilhas[b].insert(a);
        }
    }

    return 0;
}
