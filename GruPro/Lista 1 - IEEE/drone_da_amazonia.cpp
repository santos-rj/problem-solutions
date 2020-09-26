//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define endl '\n'
#define MAX 1e15 + 5
#define INF 0x3f3f3f3f
#define MAXV 2000
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef long int li;

using namespace std;

void solve(){
	int x_e = 0, y_e = 0, x_d = 0, y_d = 0;

	cin >> x_e >> y_e >> x_d >> y_d;

	if((x_e == x_d) && (y_e == y_d)){
		cout << "Soltar pacote\n";
	}else{
		cout << "Nao soltar pacote\n";
	}
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