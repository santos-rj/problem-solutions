#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int n, aux;
    vector<long long> v, t;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        v.push_back(aux);
    }

    sort(v.begin(), v.end());

    aux = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[i + 1] && i < n - 1)
        {
            aux++;
        }
        else if (i == n - 1)
        {
            v[i] != v[i - 1];
            aux++;
        }
    }

    cout << aux << endl;
    return 0;
}