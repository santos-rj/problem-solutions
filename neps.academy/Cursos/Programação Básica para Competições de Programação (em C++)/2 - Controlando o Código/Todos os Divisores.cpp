#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    int x = 0;

    cin >> x;

    for (int i = 1; i <= x; i++)
    {

        if (x % i == 0)
        {
            cout << i << ' ';
        }
    }

    cout << endl;

    return 0;
}