#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

long long hanoi(long long n)
{
    return 1 + (n == 1 ? 0 : 2 * hanoi(n - 1));
}

int main()
{

    long long n = 1, cont = 0;

    while (n != 0)
    {
        cin >> n;
        cont++;
        if (n == 0)
        {
            break;
        }

        cout << "Teste " << cont << '\n'
             << hanoi(n) << '\n'
             << endl;
    }

    return 0;
}