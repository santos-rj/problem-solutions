#include <iostream>

#define endl '\n'

using namespace std;

int main()
{
    int n = 0, i = 0, a = 0, b = 0;

    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cin >> i;

        if (i == 1)
        {
            if (a == 0)
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
        else if (i == 2)
        {
            if (a == 0)
            {
                a = 1;
            }
            else if (a == 1)
            {
                a = 0;
            }
            if (b == 0)
            {
                b = 1;
            }
            else if (b == 1)
            {
                b = 0;
            }
        }
    }

    cout << a << endl
         << b << endl;

    return 0;
}