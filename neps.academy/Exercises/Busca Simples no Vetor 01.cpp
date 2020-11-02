#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'
#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define pb push_back

using namespace std;

int main()
{
    desync;

    int a, b;
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        v.pb(a);
    }

    cin >> b;

    sort(v.begin(), v.end());

    if (binary_search(v.begin(), v.end(), b))
    {
        cout << "SIM" << endl;
    }
    else
    {
        cout << "NAO" << endl;
    }

    return 0;
}