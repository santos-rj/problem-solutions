#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int n, d, a, s;

    cin >> n >> d >> a;

    if (a <= d)
        s = d - a;
    if (a > d)
        s = (n + d) - a;

    cout << s << endl;

    return 0;
}