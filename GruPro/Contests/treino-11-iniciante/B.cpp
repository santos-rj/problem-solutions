#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'
#define pb push_back
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

typedef long long ll;

void solve(){
	ll n, k; cin >> n >> k;

	vector<ll> a(n+2), b(n+2);

	for(int i  = 1; i <= n; i++){
		cin >> a[i];
	}

	for(int i  = 1; i <= n; i++){
		cin >> b[i];
	}

	sort(a.begin()+1, a.end()-1);
	
	sort(b.begin()+1, b.end()-1);

	ll ans = 0, i_aux = 0;

	for(int i = 1; i <= n; i++){
		if(k > 0 && a[i] < b[n-i+1]){
			ans += b[n-i+1];
			i_aux = i+1;
			k--;
		}else{
			i_aux = i;
			break;
		}
	}

	for(int i = i_aux; i <= n; i++){
		ans += a[i];
	}

	cout << ans << endl;
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