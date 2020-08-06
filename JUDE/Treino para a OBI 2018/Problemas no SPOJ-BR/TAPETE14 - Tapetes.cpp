#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    long long n = 0, l = 0, r = 0;

    cin >> l >> n;

    r = ((l - n + 1) * (l - n + 1)) + (n - 1);

    cout << r << endl;

    return 0;
}