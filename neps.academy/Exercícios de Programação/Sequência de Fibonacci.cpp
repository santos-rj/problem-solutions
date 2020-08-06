#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int n, t1 = 0, t2 = 1, t3;

    cin >> n;
    cout << t1 << ' ' << t2 << ' ';
    n = n - 2;
    while (n--)
    {
        t3 = t1 + t2;
        cout << t3;
        if (n > 0)
            cout << ' ';
        t1 = t2;
        t2 = t3;
    }
    cout << endl;
    return 0;
}