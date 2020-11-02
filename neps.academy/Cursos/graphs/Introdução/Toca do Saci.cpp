#include <iostream>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define MAXV 1010

using namespace std;

int m, n;
int dist[MAXV][MAXV], mapa[MAXV][MAXV];
int di[] = {-1, 0, 1, 0};
int dj[] = {0, 1, 0, -1};

void dfs(int i, int j)
{
    for (int k = 0; k < 4; k++)
    {
        int ei = i + di[k];
        int ej = j + dj[k];
        if (ei >= 0 && ei < n && ej >= 0 && ej < m && dist[ei][ej] == -1 && mapa[ei][ej] != 0)
        {
            dist[ei][ej] = dist[i][j] + 1;
            dfs(ei, ej);
        }
    }
}

int main()
{

    int ei, ej, si, sj;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mapa[i][j];
            if (mapa[i][j] == 2)
            {
                ei = i;
                ej = j;
            }
            else if (mapa[i][j] == 3)
            {
                si = i;
                sj = j;
            }
            dist[i][j] = -1;
        }
    }

    dist[ei][ej] = 1;
    dfs(ei, ej);

    cout << dist[si][sj] << endl;

    return 0;
}