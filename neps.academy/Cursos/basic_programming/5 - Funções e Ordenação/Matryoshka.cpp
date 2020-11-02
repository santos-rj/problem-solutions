#include <bits/stdc++.h>

#define endl '\n';

#define MAX 1000000

using namespace std;

int main()
{

    int n, aux;
    vector<int> v, t, z;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        v.push_back(aux);
        t.push_back(aux);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] != t[i])
        {
            z.push_back(t[i]);
        }
    }
    sort(z.begin(), z.end());

    cout << z.size() << endl;

    for (int i = 0; i < z.size(); i++)
    {
        cout << z[i] << ' ';
    }
    cout << endl;

    return 0;
}