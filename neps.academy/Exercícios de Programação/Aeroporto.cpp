#include <iostream>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define MAX 105
#define INF 0x3f3f3f3f
#define pb push_back

using namespace std;

typedef long long ll;

ll i, j, k, maior;
int fluxo[MAX];

int main()
{

    desync;

    int a, v, inA, inB, cont = 1;

    while ((cin >> a >> v) && (a > 0 && v > 0))
    {

        for (i = 1; i <= a; i++)
        {
            fluxo[i] = 0;
        }

        for (i = 1; i <= v; i++)
        {
            cin >> inA >> inB;

            fluxo[inA]++;
            fluxo[inB]++;
        }

        maior = fluxo[1];

        for (i = 2; i <= a; i++)
            if (fluxo[i] > maior)
                maior = fluxo[i];

        cout << "Teste " << cont++ << endl;

        for (i = 1; i <= a; i++)
            if (fluxo[i] == maior)
                cout << i << ' ';
        cout << "\n\n";
    }

    return 0;
}