//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync                    \
	ios_base::sync_with_stdio(0); \
	cout.tie(0);                  \
	cin.tie(0)
#define endl '\n'
#define MAX 105
#define INF 0x3f3f3f3f
#define MAXV 105
#define ff first
#define ss second
#define pb push_back

using namespace std;

bool visitado[MAXV];
vector<int> adj[MAXV], pai[MAXV];

void dfs(int v)
{
	visitado[v] = true;

	for (int x : adj[v])
	{
		if (!visitado[x])
		{
			dfs(x);
			pai[x].pb(v);
		}
	}
}

int main()
{

	desync;

	int vertice, linha, cont = 1;

	cin >> vertice >> linha;

	while (vertice != 0 && linha != 0)
	{
		int qtd = 0;
		for (int i = 0; i < linha; i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}

		for (int i = 1; i <= vertice; i++)
		{
			for (int j = 1; j <= vertice; j++)
				visitado[j] = false;
			dfs(i);
		}

		for (int i = 1; i <= vertice; i++)
		{
			if (visitado[i] == true)
				qtd++;
		}

		cout << "Teste " << cont << endl;
		if (qtd != vertice)
		{
			cout << "falha\n";
		}
		else
		{
			cout << "normal\n";
		}

		cout << endl;

		cont++;

		cin >> vertice >> linha;

		for (int i = 1; i <= vertice; i++)
			adj[i].clear();
	}

	return 0;
}
