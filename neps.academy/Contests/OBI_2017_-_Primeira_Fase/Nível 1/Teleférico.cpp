#include <iostream>

#define endl '\n'
#define forn(i, x) for (int i = 0; i < x; i++)
#define ii long long
#define pb push_back

using namespace std;

int main()
{

    int a, c, q, r, rst;

    cin >> c >> a;

    q = a / (c - 1);
    rst = a % (c - 1);

    r = q;
    if (rst > 0)
        r++;

    cout << r << endl;

    return 0;
}