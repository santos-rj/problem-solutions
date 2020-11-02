#include <iostream>
#include <algorithm>
#include <iomanip>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';
#define MAXN 10100

using namespace std;

struct compromisso
{
    int ini, fim;
};

bool compara(compromisso a, compromisso b)
{
    return a.fim < b.fim;
}

compromisso consulta[MAXN];

int n, x, y, livre, qtd;

int main()
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> consulta[i].ini >> consulta[i].fim;
    }

    sort(consulta, consulta + n, compara);

    for (int i = 0; i < n; i++)
    {
        if (consulta[i].ini >= livre)
        {
            qtd++;
            livre = consulta[i].fim;
        }
    }

    cout << qtd << endl;

    return 0;
}