#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

	int aux;
	vector <int> t, v;
	
	for(int i = 0; i < 3; i++){
		 cin >> aux;
		 t.push_back(aux);
		 v.push_back(aux);
	}

	sort(t.begin(), t.end());

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			if(t[i] == v[j]) cout << j+1 << endl;

	return 0;
}