#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back

using namespace std;

int main()
{

    int n, m, aux;
    vector<int> v, t;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        v.pb(aux);
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        aux = 0;
        cin >> aux;
        t.pb(aux);
    }

    aux = 0;
    sort(t.begin(), t.end());

    for (int i = 0; i < n; i++)
    {
        if (!binary_search(t.begin(), t.end(), v[i]))
        {
            cout << v[i] << ' ';
        }
    }
    cout << endl;

    return 0;
}