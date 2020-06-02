#include <iostream>

#define endl '\n'
#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define pb push_back

using namespace std;

int main()
{
    desync;

    int n, in, subs, ref;

    cin >> n;

    subs = 0;
    ref = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> in;

        if (in < 50)
            subs++;
        if (in >= 50 && in < 85)
            ref++;
    }

    cout << subs << ' ' << ref << endl;

    return 0;
}