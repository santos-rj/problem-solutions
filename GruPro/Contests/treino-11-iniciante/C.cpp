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
	ll n; cin >> n;

	vector<ll> vet(n+2);

	for(int i = 1; i <= n; i++){
		cin >> vet[i];
	}

	sort(vet.begin()+1, vet.end()-1);

	ll diff = INT_MAX;

	for(int i = 1; i <= n; i++){
		if(diff > abs(vet[i+1] - vet[i])){
			diff = abs(vet[i+1] - vet[i]);
		}
	}

	cout << diff << endl;
}

int main(){
	desync;

	ll t = 1;

	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}