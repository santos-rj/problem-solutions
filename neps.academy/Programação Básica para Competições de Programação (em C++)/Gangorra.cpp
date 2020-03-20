#include <iostream>

#define endl '\n'

using namespace std;

int main()
{
    int p1 = 0, p2 = 0, c1 = 0, c2 = 0, l1 = 0, l2 = 0;

    cin >> p1 >> c1 >> p2 >> c2;

    l1 = p1 * c1;
    l2 = p2 * c2;

    if (l1 == l2)
    {
        cout << 0 << endl;
    }
    else if (l1 > l2)
    {
        cout << -1 << endl;
    }
    else if (l1 < l2)
    {
        cout << 1 << endl;
    }

    return 0;
}