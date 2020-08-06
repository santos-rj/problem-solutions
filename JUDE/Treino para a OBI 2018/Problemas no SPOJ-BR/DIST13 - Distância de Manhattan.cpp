#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int xM = 0, yM = 0, xR = 0, yR = 0, r = 0;

    cin >> xM >> yM >> xR >> yR;

    r = abs(xM - xR) + abs(yM - yR);

    cout << r << endl;

    return 0;
}