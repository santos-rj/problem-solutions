#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

	int comprimento = 0, distanciaPedagio = 0, custoKm = 0, valorPedagio = 0, custoTotal = 0;

	cin >> comprimento >> distanciaPedagio >> custoKm >> valorPedagio;

	custoTotal = (custoKm * comprimento) + ((comprimento / distanciaPedagio) * valorPedagio);

	cout << custoTotal << endl;

	return 0;
}