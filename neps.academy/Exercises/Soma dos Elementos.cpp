#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int n, aux, soma = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        soma += aux;
    }

    cout << soma << endl;

    return 0;
}