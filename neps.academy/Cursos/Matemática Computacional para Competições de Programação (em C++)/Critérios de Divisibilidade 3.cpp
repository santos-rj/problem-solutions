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
    long long t, soma = 0, par = 0, impar = 0;

    cin >> in;

    t = in.size();

    for (long long i = 0; i < t; i++)
    {
        if (i % 2 == 0)
        {
            par += (in[i] - 48);
        }
        else
        {
            impar += (in[i] - 48);
        }
    }

    soma = par - impar;

    if (abs(soma) % 11 == 0)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    return 0;
}
