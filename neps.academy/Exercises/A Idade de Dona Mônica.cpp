#include <iostream>
#include <climits>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{
    desync;

    int a, b, c, ans = INT_MIN;
    cin >> a >> b >> c;

    if (b > ans)
    {
        ans = b;
    }
    if (c > ans)
    {
        ans = c;
    }
    if ((a - (b + c)) > ans)
    {
        ans = (a - (b + c));
    }

    cout << ans << endl;

    return 0;
}