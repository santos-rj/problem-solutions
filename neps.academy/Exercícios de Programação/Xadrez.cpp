#include <bits/stdc++.h>

#define endl '\n'

bool isPar(int a, int b)
{
    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
    {
        return true;
    }
    return false;
}

using namespace std;

int main()
{

    int l, c;

    cin >> l >> c;

    if (!isPar(l, c))
    {
        cout << 0 << endl;
        return 0;
    }
    cout << 1 << endl;

    return 0;
}