#include <iostream>

using namespace std;

int main()
{
    int a = 0, m = 0;

    cin >> a >> m;

    if ((a >= 1 && m >= 1) && (a <= 50 && m <= 50))
    {
        if ((a+m) <= 50)
        {
            cout << "S\n";
        }
        else
        {

            cout << "N\n";
        }
    }
}