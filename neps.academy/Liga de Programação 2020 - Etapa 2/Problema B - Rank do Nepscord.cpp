#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

bool ordenar(const pair<long long, string> a, const pair<long long, string> b)
{
    return (a.first > b.first || a.first == b.first && a.second < b.second);
}

int main()
{

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
            if (k <= m - rank[u].first)
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

    r.resize(3);

    cout << "--Rank do Nepscord--" << endl;
    for (int i = 0; i < 3; i++)
    {
        int level = (r[i].first / 100) + 1;
        cout << "#" << i + 1 << ". " << r[i].second;
        if (r[i].second != "")
            cout << " - Nivel " << level << endl;
    }

    cout << endl;

    return 0;
}