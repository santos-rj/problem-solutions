#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int x, y;
    string s;

    cin >> x >> y;

    if (x > 0 && y > 0)
        s = "Q1";
    else if (x < 0 && y > 0)
        s = "Q2";
    else if (x < 0 && y < 0)
        s = "Q3";
    else if (x > 0 && y < 0)
        s = "Q4";
    else
        s = "eixos";

    cout << s << endl;

    return 0;
}
