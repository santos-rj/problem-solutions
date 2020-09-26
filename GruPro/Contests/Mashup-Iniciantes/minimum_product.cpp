//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define MAX 1e9 + 5
#define INF 0x3f3f3f3f
#define MAXV 2000
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef long int li;

using namespace std;

ll min(ll a, ll b){
	if(a > b) return b;

	return a; 
}

ll mult(ll a, ll b, ll x, ll y, ll n){
	ll dif_a = 0, dif_b = 0, aux_a = 0, aux_b = 0;

	dif_a = a - x;
	aux_a = min(dif_a, n);

	a -= aux_a;
	n -= aux_a;

	dif_b = b - y;
	aux_b = min(dif_b,n);

	b -= aux_b;
	n -= aux_b;

	return (a*b);
}

void solve(){

	ll a = 0, b =0, x = 0, y = 0, n = 0, ans = 0;

	cin >> a >> b >> x >> y >> n;

	ans = min(mult(a,b,x,y,n), mult(b,a,y,x,n));

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