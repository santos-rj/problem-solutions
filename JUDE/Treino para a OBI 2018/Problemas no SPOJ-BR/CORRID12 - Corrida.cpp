#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int cT = 0, cP = 0, pT = 0;

    cin >> cT >> cP;

    pT = cT % cP;

    cout << pT << endl;

    return 0;
}