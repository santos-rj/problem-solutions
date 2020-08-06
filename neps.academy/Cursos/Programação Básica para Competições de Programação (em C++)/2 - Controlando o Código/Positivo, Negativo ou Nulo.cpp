#include <iostream>

#define endl '\n'

using namespace std;

int main()
{

    int x = 0;

    cin >> x;

    if (x > 0)
    {
        cout << "positivo" << endl;
    }
    else if (x < 0)
    {
        cout << "negativo" << endl;
    }
    else
    {
        cout << "nulo" << endl;
    }

    return 0;
}