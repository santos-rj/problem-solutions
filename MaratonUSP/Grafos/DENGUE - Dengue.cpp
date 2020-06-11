#include <iostream>
#include <climits>
#include <vector>

#define desync                        \
	ios_base::sync_with_stdio(false); \
	cout.tie(NULL);                   \
	cin.tie(NULL)
#define endl '\n'
#define INF 0x3f3f3f3f
#define pb push_back

using namespace std;

typedef long long ll;

vector<int> adj[102];

int dist[102], max_dist = INT_MIN, ans, clk;

void dfs(int v)
{
	for (int x : adj[v])
	{
		if (dist[x] != -1)
			continue;
		dist[x] = dist[v] + 1;
		dfs(x);
	}
	if (dist[v] > max_dist)
	{
		max_dist = dist[v];
	}
}

int main()
{

	desync;

	int n;
	cin >> n;

	while (n != 0)
	{

		for (int i = 0; i < n - 1; i++)
		{
			int a, b;
			cin >> a >> b;
			adj[a].pb(b);
			adj[b].pb(a);
		}

		int last_dist = INT_MAX;

		for (int i = 1; i <= n; i++)
		{
			max_dist = INT_MIN;
			for (int j = 1; j <= n; j++)
				dist[j] = -1;
			dist[i] = 0;
			dfs(i);
			if (max_dist < last_dist)
			{
				ans = i;
				last_dist = max_dist;
			}
		}

		cout << "Teste " << ++clk << endl;
		cout << ans << endl;
		cin >> n;

		for (int i = 1; i <= n; i++)
			adj[i].clear();
	}

	return 0;
}