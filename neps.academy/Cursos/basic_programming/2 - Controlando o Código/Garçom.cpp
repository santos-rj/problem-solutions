#include <iostream>

#define endl '\n'

using namespace std;

int main()
{

    int n = 0, l = 0, c = 0, r = 0;

    cin >> n;

    while (n > 0)
    {
        cin >> l >> c;

        if (l > c)
        {
            r += c;
        }
        n--;
    }

    cout << r << endl;

    return 0;
}