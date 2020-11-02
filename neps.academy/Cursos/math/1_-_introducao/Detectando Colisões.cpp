//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                    \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0)
#define endl '\n'
#define MAX 1000
#define INF 0x3f3f3f3f
#define MAXV 2000
#define ff first
#define ss second

using namespace std;

int main()
{

    desync;

    int x0, y0, x1, y1, x2, y2, x3, y3;

    cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((x1 < x2 || y1 < y2) || (x0 > x3 || y0 > y3))
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}