#include <iostream>
#include <vector>
#include <algorithm>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{

    int in, cont = 0;
    vector<int> num, aux, saida;

    for (int i = 0; i < 10; i++)
    {
        cin >> in;
        num.push_back(in);
        aux.push_back(in);
    }

    cin >> in;

    sort(aux.begin(), aux.end());

    if (binary_search(aux.begin(), aux.end(), in))
    {
        for (int i = 0; i < 10; i++)
        {
            if (in == num[i])
            {
                cont++;
                saida.push_back(i);
            }
        }

        cout << cont << endl;
        int tamanho = saida.size();
        for (int i = 0; i < tamanho; i++)
        {
            cout << saida[i] << ' ';
        }
        cout << endl;
    }
    else
    {
        cout << "Mia x" << endl;
    }

    return 0;
}