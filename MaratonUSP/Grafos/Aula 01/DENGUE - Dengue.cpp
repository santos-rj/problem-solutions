#include <iostream>
#include <climits>
#include <vector>

#define desync                        \
	ios_base::sync_with_stdio(false); \
	cout.tie(NULL);                   \
	cin.tie(NULL)
#define endl '\n';

using namespace std;

int i, j, k;
vector<int> adj[105];
int distancia[105], maior_distancia = INT_MIN, ans, cont;

void dfs(int v)
{
	for (int x : adj[v])
	{
		if (distancia[x] != -1)
			continue;
		distancia[x] = distancia[v] + 1;
		dfs(x);
	}
	if (distancia[v] > maior_distancia)
	{
		maior_distancia = distancia[v];
	}
}

int main()
{

	desync;

	int n;

	cin >> n;

	while (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			int a, b;
			cin >> a >> b;

			adj[a].push_back(b);
			adj[b].push_back(a);
		}

		int ultima_distancia = INT_MAX;

		for (i = 1; i <= n; i++)
		{
			maior_distancia = INT_MIN;
			for (j = 1; j <= n; j++)
				distancia[j] = -1;
			distancia[i] = 0;
			dfs(i);
			if (maior_distancia < ultima_distancia)
			{
				ans = i;
				ultima_distancia = maior_distancia;
			}
		}

		cout << "Teste " << ++cont << endl;
		cout << ans << endl;
		cin >> n;

		for (i = 1; i <= n; i++)
			adj[i].clear();
	}

	return 0;
}