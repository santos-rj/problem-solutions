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
	li in = 0; cin >> in;

	if(in%2==0)
		cout << in << "\nThanos nao poupara o Universo.\n";
	else
		cout << in << "\nThanos poupara o Universo.\n";
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