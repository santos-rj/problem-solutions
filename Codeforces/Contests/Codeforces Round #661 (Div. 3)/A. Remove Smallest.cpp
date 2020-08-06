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
#define MAXV 2000
#define ff first
#define ss second
#define pb push_back

using namespace std;

int main()
{

	desync;

	int t, n, in;

	cin >> t;

	while (t--)
	{
		cin >> n;
		set<int> nums;
		for (int i = 0; i < n; i++)
		{
			cin >> in;
			nums.insert(in);
		}

		auto ant = nums.begin();
		auto i = nums.begin();
		for (i++; i != nums.end(); i++)
		{
			if (abs(*i - *ant) <= 1 && (*i >= *ant))
			{
				nums.erase(ant);
			}
			ant = i;
		}

		if (nums.size() != 1)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}

	return 0;
}
