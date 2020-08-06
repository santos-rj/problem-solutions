//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                    \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)
#define endl '\n'
#define MAX 1e9 + 5
#define INF 0x3f3f3f3f
#define MAXV 2000
#define ff first
#define ss second
#define pb push_back

using namespace std;

int main()
{

    desync;

    string in;
    int soma = 0;
    cin >> in;

    int t = in.size();

    if (in[t - 1] - 48 == 0 || in[t - 1] - 48 == 2 || in[t - 1] - 48 == 4 || in[t - 1] - 48 == 6 || in[t - 1] - 48 == 8)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    for (int i = 0; i < t; i++)
    {
        soma += (in[i] - 48);
    }
    if (soma % 3 == 0)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    if (in[t - 1] - 48 == 0 || in[t - 1] - 48 == 5)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    return 0;
}
