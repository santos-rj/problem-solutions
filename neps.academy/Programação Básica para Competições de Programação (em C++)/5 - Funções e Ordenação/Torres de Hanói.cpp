#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int hanoi(int n)
{
    return 1 + (n == 1 ? 0 : 2 * hanoi(n - 1));
}

int main()
{

    int n, cont = 0;

    cin >> n;

    while (n != 0)
    {
        cont++;
        if (n == 0)
        {
            break;
        }

        cout << "Teste " << cont << hanoi(n) << endl;
    }

    return 0;
}