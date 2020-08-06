#include <iostream>
#include <iomanip>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int n;
    cin >> n;

    float v[n], s;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    s = (v[0] - v[n - 1]) * -100;

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}