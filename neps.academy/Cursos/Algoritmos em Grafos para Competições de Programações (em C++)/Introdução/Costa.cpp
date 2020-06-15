#include <iostream>
#include <set>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1005
#define pb push_back

using namespace std;

typedef long long ll;

int i, j, k, cont;
char mapa[MAX][MAX];

int main()
{

    desync;

    char in;
    int n, m;

    cin >> m >> n;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> mapa[i][j];
        }
    }

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (mapa[i][j] == '#')
            {
                if ((mapa[i - 1][j] == '.' || mapa[i - 1][j] == '\0') || (mapa[i + 1][j] == '.' || mapa[i + 1][j] == '\0') || (mapa[i][j - 1] == '.' || mapa[i][j - 1] == '\0') || (mapa[i][j + 1] == '.' || mapa[i][j + 1] == '\0'))
                {
                    cont++;
                }
            }
        }
    }

    cout << cont << endl;

    return 0;
}