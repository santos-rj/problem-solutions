#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int t, i, j;
    string n, aux;

    cin >> n;

    t = n.length();

    for (i = 0; i < t; i++)
    {
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u')
        {
            aux += n[i];
        }
    }

    t = 0;
    t = aux.length();

    for (i = 0, j = t - 1; i < t; i++, j--)
    {
        if (aux[i] != aux[j])
        {
            cout << 'N' << endl;
            return 0;
        }
    }
    cout << 'S' << endl;

    return 0;
}