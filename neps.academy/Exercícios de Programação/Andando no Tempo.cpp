#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    char s = 'N';
    int a, b, c;

    cin >> a >> b >> c;

    if ((a == b) || (a == c) || (b == c))
    {
        s = 'S';
    }
    else if ((a + b == c) || (a + c == b) || (b + c == a))
    {
        s = 'S';
    }

    cout << s << endl;

    return 0;
}