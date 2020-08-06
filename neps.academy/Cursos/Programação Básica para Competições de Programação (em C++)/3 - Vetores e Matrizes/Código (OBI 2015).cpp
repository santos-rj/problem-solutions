#include <iostream>

#define endl '\n'

using namespace std;

int main()
{

    int n = 0, cont = 0;

    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        if ((vet[i] == 1) && (vet[i + 1] == 0) && (vet[i + 2] == 0))
        {
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}