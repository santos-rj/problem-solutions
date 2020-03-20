#include <iostream>

#define endl '\n'

using namespace std;

int main()
{

    int q = 0, n = 0, pontuacao = 0, maiorPontuacao = -1, anterior = 0;

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> n;

        if (i != 0)
        {
            if (n == anterior)
            {
                pontuacao++;
            }
            else
            {
                pontuacao = 0;
            }
        }

        if (pontuacao > maiorPontuacao)
        {
            maiorPontuacao = pontuacao;
        }
        anterior = n;
    }

    cout << maiorPontuacao + 1 << endl;

    return 0;
}