#include <iostream>

#define endl '\n'

using namespace std;

int main()
{

    int n = 0, a = 0, r = 0, rd = 1;

    cin >> n;

    while (n > 0)
    {
        cin >> a;

        r += a;

        if (r < 1000000)
        {
            rd++;
        }
        else if (r >= 1000000)
        {
            break;
        }
    }

    cout << rd << endl;

    return 0;
}