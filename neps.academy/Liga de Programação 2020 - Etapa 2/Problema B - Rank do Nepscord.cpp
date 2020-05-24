#include <bits/stdc++.h>

using namespace std;

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define pb push_back
#define endl '\n'
#define ss sencond
#define ff first
#define forn(x) for (int i = 0; i < x; i++)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<vii> matriz;

bool ordenar(const pair<long long, string> a, const pair<long long, string> b)
{
    return (a.first > b.first || a.first == b.first && a.second < b.second);
}

int main()
{
    desync;

    int n, k;
    long long m;
    map<string, pair<long long, int>> rank;
    string u;
    vector<pair<long long, string>> r;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> u >> m;
        if (rank.count(u))
        {
            if (m >= k + rank[u].first)
            {
                rank[u].second += 25;
                rank[u].first = m;
            }
        }
        else
        {
            rank[u] = make_pair(m, 25);
        }
    }

    for (auto i = rank.begin(); i != rank.end(); i++)
    {
        r.push_back((make_pair((*i).second.second, (*i).first)));
    }

    sort(r.begin(), r.end(), ordenar);

    cout << "--Rank do Nepscord--" << endl;
    for (int i = 0; i < 3; i++)
    {
        int level = (r[i].first / 100) + 1;
        cout << "#" << i + 1 << ".";
        if (r[i].second != "")
            cout << ' ' << r[i].second << " - Nivel " << level << endl;
    }

    cout << endl;

    return 0;
}
