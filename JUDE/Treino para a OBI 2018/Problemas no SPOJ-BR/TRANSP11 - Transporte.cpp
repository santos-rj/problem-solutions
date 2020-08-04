#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

	int cL = 0, cC = 0, cA = 0, x = 0, y = 0, z = 0, r = 0;

	cin >> cL >> cC >> cA;
	cin >> x >> y >> z;

	r = (x / cL) * (y / cC) * (z / cA);

	cout << r << endl;

	return 0;
}