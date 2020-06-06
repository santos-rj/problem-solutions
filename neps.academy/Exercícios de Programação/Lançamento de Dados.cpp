#include <iostream>
#include <vector>
#include <algorithm>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{

    desync;

    int n, cont;
    vector<pair<int, int>> jogadas;

    cin >> n;

    int result[n];

    for (int i = 0; i < n; i++)
    {
        cin >> result[i];
    }

    for (int i = 1; i <= 12; i++)
    {
        cont = 0;
        for (int j = 0; j < n; j++)
        {
            if (result[j] == i)
                cont++;
        }

        jogadas.push_back(make_pair(cont, i));
    }

    sort(jogadas.begin(), jogadas.end());

    if (jogadas[11].first > jogadas[10].first)
    {
        cout << jogadas[11].second << endl;
    }
    else if (jogadas[11].first == jogadas[10].first)
    {
        for (int i = 0; i < 12; i++)
        {
            if (jogadas[i].first == jogadas[11].first)
                cout << jogadas[i].second << ' ';
        }
        cout << endl;
    }

    return 0;
}