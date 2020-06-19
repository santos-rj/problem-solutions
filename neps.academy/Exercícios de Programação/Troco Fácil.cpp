#include <iostream>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n'
#define MAXV 1010

using namespace std;

long long in, ans;

int main()
{

    cin >> in;

    ans = (in / 100) + ((in % 100) / 50) + (((in % 100) % 50) / 25) + ((((in % 100) % 50) % 25) / 10) + (((((in % 100) % 50) % 25) % 10) / 5) + ((((((in % 100) % 50) % 25) % 10) % 5) / 1);

    cout << ans << endl;

    return 0;
}