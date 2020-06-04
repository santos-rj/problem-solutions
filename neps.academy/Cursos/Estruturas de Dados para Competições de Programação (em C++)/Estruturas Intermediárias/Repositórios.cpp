#include <iostream>
#include <map>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{

    long long c, n, a, b;
    map<long long, long long> v, t;

    cin >> c >> n;

    for (int i = 0; i < c; i++)
    {
        cin >> a >> b;
        v.insert(make_pair(a, b));
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (v.find(a) == v.end())
        {
            t.insert(make_pair(a, b));
        }
        else if (v.find(a)->second < b)
        {
            t.insert(make_pair(a, b));
        }

        if (t.find(a) != t.end() && t.find(a)->second < b)
        {
            t[a] = b;
        }
    }

    for (auto it = t.begin(); it != t.end(); it++)
    {
        cout << it->first << ' ' << it->second << endl;
    }

    return 0;
}