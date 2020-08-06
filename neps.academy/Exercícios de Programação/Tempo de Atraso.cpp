#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int h1, m1, h2, m2, h3 = 0, m3 = 0, atraso = 0, aux = 0;

    cin >> h1 >> m1 >> h2 >> m2;

    m3 = m1 + 45;
    h3 = h1;

    if (m1 + 45 >= 60)
    {
        aux = m3 / 60;
        h3 = h1 + (aux);
        m3 = m3 - (60 * aux);
    }

    atraso = ((h3 - h2) * 60) + (m3 - m2);

    if (h3 < h2)
    {
        cout << "Sucesso" << endl;
    }
    else
    {
        if (h3 == h2 && m3 <= m2)
        {
            cout << "Sucesso" << endl;
        }
        else
        {
            cout << "Atrasado " << atraso << endl;
        }
    }

    return 0;
}