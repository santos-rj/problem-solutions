#include <iostream>
#include <vector>
#include <algorithm>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl '\n'
#define forn(k, x) for (int i = k; i < x; i++)
#define ii long long
#define pb push_back

using namespace std;

int main()
{
    desync;

    int aux;
    vector<ii> v;

    for (int i = 0; i < 10; i++)
    {
        cin >> aux;
        v.pb(aux);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < 10; i++)
    {
        cout << v[i];
        if (i == 9)
        {
            cout << endl;
        }
        else
        {
            cout << ' ';
        }
    }

    sort(v.rbegin(), v.rend());
    for (int i = 0; i < 10; i++)
    {
        cout << v[i];
        if (i == 9)
        {
            cout << endl;
        }
        else
        {
            cout << ' ';
        }
    }

    return 0;
}