#include <iostream>
#include <string>
#include <algorithm>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl '\n'
#define forn(k, x) for (int i = k; i < x; i++)
#define ii long long
#define pb push_back

using namespace std;

int main()
{
    desync;

    string vogais, consoantes, in;

    cin >> in;
    cin.ignore();

    int tamanho = in.length();

    for (int i = 0; i < tamanho; i++)
    {
        if (in[i] == 'a' || in[i] == 'e' || in[i] == 'i' || in[i] == 'o' || in[i] == 'u')
            vogais += in[i];
        else
            consoantes += in[i];
    }

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;

    return 0;
}