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
    long long t, soma = 0, finais;

    cin >> in;

    t = in.size();

    if (t > 1)
    {
        finais = (((in[t - 2] - 48) * 10) + (in[t - 1] - 48));
    }
    else
    {
        finais = (in[t - 1] - 48);
    }

    if (finais % 4 == 0 || in[t - 1] - 48 == 0 && in[t - 2] - 48 == 0)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    for (long long i = 0; i < t; i++)
    {
        soma += (in[i] - 48);
    }
    if (soma % 9 == 0)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    if (finais % 25 == 0 || in[t - 1] - 48 == 0 && in[t - 2] - 48 == 0)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    return 0;
}
