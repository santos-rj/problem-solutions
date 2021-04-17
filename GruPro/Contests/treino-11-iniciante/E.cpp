#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'
#define pb push_back
#define desync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

typedef long long ll;

void solve(){

	ll in, ans;

	vector<ll> vet(5);

	for(int i = 1; i <= 3; i++){
		cin >> vet[i];
	}

	sort(vet.begin()+1, vet.end()-1);

	ans = vet[3] - vet[1];

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