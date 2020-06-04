#include <iostream>

#define endl '\n'

using namespace std;

int main()
{
    int n1 = 0, n2 = 0, s = 0, r = 0;

    cin >> n1 >> n2;

    s = n1 + n2;

    r = (n1 + n2) % 2;

    if (r == 0)
    {
        cout << "Bino" << endl;
    }
    else
    {
        cout << "Cino" << endl;
    }

    return 0;
}