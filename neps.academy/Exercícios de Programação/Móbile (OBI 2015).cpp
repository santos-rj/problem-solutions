#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if ((b + c + d == a) && (b + c == d) && (b == c))
    {
        cout << 'S' << endl;
        return 0;
    }

    cout << 'N' << endl;

    return 0;
}