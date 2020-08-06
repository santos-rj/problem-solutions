#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int n, aux;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        v.push_back(aux);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i];

        if (i >= n - 1)
        {
            cout << endl;
            return 0;
        }
        else
        {
            cout << ' ';
        }
    }

    return 0;
}