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

    char d;
    string n, ans;

    cin >> d >> n;

    while (d != '0' && n[0] != '0')
    {
        ans = "";

        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] != d)
            {
                ans += n[i];
            }
        }

        if (ans.size() == 0 || ans[0] == '0')
        {
            cout << "0\n";
        }
        else
        {
            cout << ans << endl;
        }

        cin >> d >> n;
    }

    return 0;
}
