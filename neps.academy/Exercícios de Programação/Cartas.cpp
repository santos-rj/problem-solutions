#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int a, b, c, falta;

    cin >> a >> b >> c;

    if (a == b)
    {
        falta = c;
    }
    else
    {
        if (b == c)
        {
            falta = a;
        }
        else
        {
            falta = b;
        }
    }

    cout << falta << endl;

    return 0;
}