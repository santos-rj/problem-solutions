#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int ano = 0, r = 1986;

    cin >> ano;

    while (r <= ano)
    {
        r += 76;
    }

    cout << r << endl;

    return 0;
}