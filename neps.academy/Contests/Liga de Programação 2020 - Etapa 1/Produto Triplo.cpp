#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'
#define forn(x) for (int i = 0; i < x; i++)
#define pb push_back

using namespace std;

int main()
{

    int n;
    long long aux = 0, negativo, positivo;
    vector<long long> v;

    cin >> n;

    forn(n)
    {
        cin >> aux;
        v.pb(aux);
    }

    sort(v.begin(), v.end());

    positivo = v[n - 1] * v[n - 2] * v[n - 3];
    negativo = abs(v[0] * v[1] * v[n - 1]);

    cout << max(positivo, negativo) << endl;

    return 0;
}