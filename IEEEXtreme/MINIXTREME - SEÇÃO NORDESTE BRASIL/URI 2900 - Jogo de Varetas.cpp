//Author: Rafael Santos
//Site: santos-rj.github.io

#include <bits/stdc++.h>

#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define endl '\n'
#define MAX 105
#define INF 0x3f3f3f3f
#define MAXV 2000
#define ff first
#define ss second
#define pb push_back

using namespace std;

int main(){
    int n, c, v, ans;

    while(cin>>n && n!=0){
        ans=0;
        for(int i=0; i<n;i++){
            cin>>c>>v;
            ans+=v/2;
        }

        ans/=2;

        cout<<ans<<endl;
    }
    cout<<endl;
    return 0;
}
