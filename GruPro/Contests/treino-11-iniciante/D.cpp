#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define endl '\n'
#define pb push_back
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

typedef long long ll;

void solve(){
	ll n = 0, ans = 0, in = 0;

	cin >> n;

	vector<ll> vet(n+2);

	for(ll i = 1; i <= n; i++){
		cin >> vet[i];
	}

	sort(vet.begin() + 1, vet.end() - 1);

	for(ll i = 1; i <= n; i++){
		if(vet[i] && vet[i + 1] != vet[i]){
			ans++;
		}
	}

	cout << ans << endl;
}

int main(){
	desync;

	ll t = 1;

	// cin >> t;

	while(t--){
		solve();
	}

	return 0;
}