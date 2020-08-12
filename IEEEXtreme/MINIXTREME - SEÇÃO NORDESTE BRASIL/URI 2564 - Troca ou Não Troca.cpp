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

long long n, p[MAX], r[MAX], cont, maior, pos;

int main()
{
    while(cin>>n){

        maior=INT_MIN;
        cont = 0;

        for(int i=0;i<n-1;i++){
            cin>>p[i]>>r[i];

            if(p[i]>maior){
                maior = p[i];
                pos = i;
            }
        }

        for(int i=pos;i<n-1;i++){
            if((p[i] == maior && r[i] == 0) || (p[i] != maior && r[i] == 1)){
                cont++;
            }
        }

        cout<<cont<<endl;
    }

    return 0;
}
