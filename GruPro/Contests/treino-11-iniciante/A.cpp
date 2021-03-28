#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'
#define pb push_back
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

typedef long long ll;

void solve(){

	ll n;

	cin >> n;

	vector<ll> vet;

	for(int  i = 0; i < n; i++){
		ll in; cin >> in;
		vet.pb(in);
	}

	sort(vet.begin(), vet.end());

	for(int i = 0; i < n-1; i++){
		if(abs(vet[i]-vet[i+1]) <= 1){
			continue;
		}else{
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
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