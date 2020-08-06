#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int x, n = 10;

    cin >> x;

    while (n--)
    {
        cout << x + 1 << ' ';
        x++;
    }
    cout << endl;

    return 0;
}