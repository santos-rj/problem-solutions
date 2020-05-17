#include <iostream>

#define endl '\n'

using namespace std;

int main()
{

    double a = 0, b = 0, media = 0;

    cin >> a >> b;

    media = (a + b) / 2;

    if (media >= 7)
    {
        cout << "Aprovado" << endl;
    }
    else if ((media < 7) && (media >= 4))
    {
        cout << "Recuperacao" << endl;
    }
    else if (media < 4)
    {
        cout << "Reprovado" << endl;
    }

    return 0;
}