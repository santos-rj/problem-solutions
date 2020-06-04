#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    char aux;
    int n, cont, t, cont2;
    string alg, txt;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> alg;
        txt += alg;
    }

    t = txt.length();

    cont2 = 0;
    for (int i = 48; i < 58; i++)
    {

        cont = 0;
        for (int j = 0; j < t; j++)
        {

            if (txt[j] == i)
            {
                cont++;
            }
        }

        cout << cont2 << " - " << cont << endl;
        cont2++;
    }

    return 0;
}