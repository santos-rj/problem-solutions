#include <iostream>
#include <vector>

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

    int a;
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        v.pb(a);
    }

    for (int i = 10 - 1; i >= 0; i--)
    {
        cout << v[i] << endl;
    }

    return 0;
}