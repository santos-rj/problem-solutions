#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define endl '\n'
#define pb push_back
#define desync                    \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0)
#define MAXN 8005

using namespace std;

typedef long long ll;

void solve()
{

	int n;
	cin >> n;

	vector<ll> vet(MAXN, 0), prefix(MAXN, 0);

	for (ll i = 1; i <= n; i++) //n+1
	{
		cin >> vet[i];
	} // n

	for (ll l = 1; l <= n; l++) //n+1
	{
		ll sum = vet[l];

		for (ll r = l + 1; r <= n; r++) //n+1
		{
			sum += vet[r];

			if (sum <= n)
			{
				prefix[sum] = 1;
			}
		}
	} //n²

	ll ans = 0;
	for (ll i = 1; i <= n; i++)
	{
		ans += prefix[vet[i]];
	} //n

	//(n²) --> (n²)

	cout << ans << endl;
}

int main()
{
	desync;

	ll t = 1;

	cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}