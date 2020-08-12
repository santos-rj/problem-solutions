#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define MAX 500
#define MAXV 1005
#define ms(v,x) memset(v,x,sizeof(v))
#define ff first
#define ss second
#define td(v) v.begin(),v.end()
#define rep(i,a,n) for (int i=(a);i<(n);i++)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define re(v) {for(auto &_re : v) cin >> _re;}
#define pr(v) {for(auto _pr : v) cout << _pr << " "; cout << endl;}
#define prr(v) {for(auto _prr : v) cout << _prr.ff << " " << _prr.ss << endl;}
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

typedef long long ll;

using namespace std;

const ll M = 1e9 + 7;
const double PI = acos(-1);
const double min_dist_v = 1e-4;
const double min_dist_e = 1e-6;
const double eps = 1e-6;

bool visitado[MAXV];
vector<int> adj[MAXV], pai[MAXV];

void dfs(int v){

    visitado[v] = true;

    for(int x : adj[v]){
        if(!visitado[x]){
            dfs(x);
            pai[x].pb(v);
        }
    }
}

void solve(){
    int n, m, i, j, cont = 0; cin >> n >> m;

    while(m--){
        cin >> i >> j;

        adj[i].pb(j);
        adj[j].pb(i);
    }

    for(int i = 1; i <= n; i++){
        if(visitado[i] == false){
            cont++;
            dfs(i);
        }
    }

    cout << cont << endl;
}

int main(){
    desync;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
