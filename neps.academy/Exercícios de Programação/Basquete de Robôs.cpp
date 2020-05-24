#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int d, s;

    cin >> d;

    if (d <= 800)
        s = 1;
    else if (d > 800 && d <= 1400)
        s = 2;
    else if (d > 1400 && d <= 2000)
        s = 3;

    cout << s << endl;

    return 0;
}