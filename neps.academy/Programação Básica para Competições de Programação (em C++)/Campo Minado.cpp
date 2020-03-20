#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int n = 0, sum = 0;

    cin >> n;

    if (n >= 1 && n <= 50)
    {

        int vet[n + 2];
        
        vet[0] = 0;
        vet[n + 1] = 0;


        for (int i = 1; i <= n; i++)
        {
            cin >> vet[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cout << (vet[i - 1] + vet[i] + vet[i + 1]) << endl;
        }
    }
    return 0;
}