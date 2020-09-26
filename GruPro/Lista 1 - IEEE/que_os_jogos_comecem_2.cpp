//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define endl '\n'
#define MAX 1e9 + 5
#define INF 0x3f3f3f3f
#define MAXV 2000
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef long int li;

using namespace std;

void solve(){
	int x = 0, y = 0, q1 = 0, q2 = 0, ans = 0; cin >> x >> y;

	q1 = x + (54 * (43 * 2) + (y + 43));
	q2 = y * (24 * (12 * 3) - (x + 43));

	ans = q1 + q2;

	cout << "Resultado da primeira questão é: " << q1 << "\nResultado da segunda questão é: "
	<< q2 << "\nResultado final é: " << ans << endl;
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