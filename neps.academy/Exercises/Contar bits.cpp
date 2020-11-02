#include <iostream>
#include <climits>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define MAXV 1010

using namespace std;

long long ans, dividendo, resultado, resto;

int main()
{

    cin >> dividendo;

    do
    {
        resto = (dividendo % 2);
        resultado = dividendo / 2;
        dividendo = resultado;

        if (resto == 1)
            ans++;
    } while (resultado >= 2);

    cout << ++ans << endl;

    return 0;
}