#include <iostream>
#include <vector>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int a, qntDivisores = 0, soma = 0;
    vector<int> divisores;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            qntDivisores++;
            divisores.pb(i);
            soma += i;
        }
    }

    cout << qntDivisores << " divisor(es): ";
    for (int i = 0; i < qntDivisores; i++)
    {
        cout << divisores[i] << ' ';
    }
    cout << endl;

    cout << "Soma de divisores = " << soma << endl;

    if (qntDivisores == 2)
    {
        cout << "Primo" << endl;
    }
    else
    {
        cout << "Nao primo" << endl;
    }

    return 0;
}