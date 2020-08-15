#include <iostream>

#define endl '\n'
#define forn(i, x) for (int i = 0; i < x; i++)
#define ii long long
#define pb push_back

using namespace std;

int main()
{

    int a, b, c;
    int h, l;
    char s = 'N';

    cin >> a >> b >> c >> h >> l;

    if (((a <= h && b <= l) || (b <= h && a <= l)) || ((a <= h && c <= l) || (c <= h && a <= l)) || ((c <= h && b <= l) || (b <= h && c <= l)))
        s = 'S';

    cout << s << endl;

    return 0;
}