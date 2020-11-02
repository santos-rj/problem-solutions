#include <iostream>

#define endl '\n';
#define pb push_back

using namespace std;

int fatorial(int n)
{

    if (n < 2)
    {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main()
{

    int a;

    cin >> a;

    cout << fatorial(a) << endl;

    return 0;
}