#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && a == c)
        cout << '*' << endl;
    if ((a != b) && (a != c) && (b == c))
        cout << 'A' << endl;
    if ((b != a) && (b != c) && (a == c))
        cout << 'B' << endl;
    if ((c != b) && (a != c) && (b == a))
        cout << 'C' << endl;

    return 0;
}