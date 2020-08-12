#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define MAX 10
#define MAXV 1010
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

using namespace std;

typedef long long ll;

const ll M = 1e9 + 7;
const double PI = acos(-1);
const double min_dist_v = 1e-4;
const double min_dist_e = 1e-6;
const double eps = 1e-6;

int m, n, dist[MAXV][MAXV], mapa[MAXV][MAXV], di[] = {-1,0,1,0}, dj[] = {0,1,0,-1};

void dfs(int i, int j){
    for(int l = 0; l < 4; l++){
        int ei = i + di[l];
        int ej = j + dj[l];
        if(ei >= 0 && ei < n && ej >= 0 && ej < m && dist[ei][ej] == -1 && mapa[ei][ej] != 0){
            dist[ei][ej] = dist[i][j] + 1;
            dfs(ei,ej);
        }
    }
}

void solve(){
    int ei, ej, si, sj;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mapa[i][j];
            if(mapa[i][j] == 2){
                ei = i;
                ej = j;
            }else if(mapa[i][j] == 3){
                si = i;
                sj = j;
            }
            dist[i][j] = -1;
        }
    }

    dist[ei][ej] = 1;
    dfs(ei,ej);

    cout << dist[si][sj] << endl;
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
