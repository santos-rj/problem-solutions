#include <iostream>
#include <string>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl '\n'
#define forn(k, x) for (int i = k; i < x; i++)
#define ii long long
#define pb push_back
#define debug(x) cout << x << endl;

using namespace std;

int main()
{
    desync;

    int in, qnt = 0, s100, s50, s25, s10, s5, s1;

    cin >> in;

    s100 = in / 100;
    s50 = (in % 100) / 50;
    s25 = ((in % 100) % 50) / 25;
    s10 = (((in % 100) % 50) % 25) / 10;
    s5 = ((((in % 100) % 50) % 25) % 10) / 5;
    s1 = (((((in % 100) % 50) % 25) % 10) % 5) / 1;

    qnt = s100 + s50 + s25 + s10 + s5 + s1;

    cout << qnt << endl;

    cout << s100 << endl;
    cout << s50 << endl;
    cout << s25 << endl;
    cout << s10 << endl;
    cout << s5 << endl;
    cout << s1 << endl;

    return 0;
}