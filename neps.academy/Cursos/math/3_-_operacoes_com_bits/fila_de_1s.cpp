#include <bits/stdc++.h>

#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define endl "\n"
#define pb push_back
#define MAX 1300005
#define MAXV 1010
#define ff first
#define ss second

typedef long long ll;
typedef long int li;

using namespace std;

void solve(){
	
	bool auth = true;
	ll n; 
	
	cin >> n;

    if(n == 0) auth = false;
	
	while(n > 1 && auth == true){
		ll resto = 0;
		
		resto = n % 2;
		n /= 2;
				
		if(resto == 0){
			auth = false;
			break;
		}
		
		
	}
	
	if(auth)
		cout << "S\n";
	else
		cout << "N\n";
}

int main(){

    desync;

    ll t = 1;
    //cin >> t;
	
    while (t--)
    {
        solve();
    }

    return 0;
}