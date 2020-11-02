#include <iostream>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{

    desync;

    int a, b;

    cin >> a >> b;

    if (a == b)
    {
        cout << (4 * a) << '\n'
             << "Quadrado" << endl;
    }
    else
    {
        cout << (2 * a) + (2 * b) << '\n'
             << "Retangulo" << endl;
    }

    return 0;
}