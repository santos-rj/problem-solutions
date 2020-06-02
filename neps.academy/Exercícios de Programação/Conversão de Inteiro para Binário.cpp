#include <iostream>
#include <vector>
#include <algorithm>

#define desync ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{

	long long dividendo, quociente, resto = 0;
	vector<long long> num;
	
	cin >> dividendo;
	
	if(dividendo == 0){
		cout << 0 << endl;
		return 0;
	}
	
	for(int i = 0; dividendo != 1; i++){
		resto = dividendo % 2;
		quociente = dividendo / 2;
		dividendo = quociente;
	
		num.push_back(resto);
		
		if(dividendo == 1)
			num.push_back(quociente);
	}
	int length = num.size();
	for (int i = length - 1; i >= 0; i--)
    {
        cout << num[i];
    }
    cout << endl;
	
	
	
    return 0;
}