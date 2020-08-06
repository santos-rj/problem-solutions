#include <bits/stdc++.h>

#define endl '\n';
#define pb push_back
#define MAX 110

using namespace std;

int main()
{

    int g, p, s, k, aux;
    long long tab[MAX][MAX];
    int pts[MAX], spts[MAX];

    while ((cin >> g >> p) && (g != 0 && p != 0))
    {

        for (int i = 0; i < g; i++)
        {
            for (int j = 0; j < p; j++)
            {
                cin >> tab[i][j];
            }
        }

        cin >> s;

        while (s--)
        {
            for (int i = 0; i < MAX; i++)
            {
                pts[i] = 0;
                spts[i] = 0;
            }
            cin >> k;
            for (int i = 0; i < k; i++)
                cin >> spts[i];

            for (int i = 0; i < g; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    pts[j] += spts[tab[i][j] - 1];
                }
            }

            aux = -MAX;

            for (int i = 0; i < p; i++)
            {
                if (pts[i] > aux)
                    aux = pts[i];
            }

            for (int i = 0; i < p; i++)
            {
                if (pts[i] == aux)
                {

                    cout << i + 1 << ' ';
                }
            }

            cout << endl;
        }
    }
    return 0;
}