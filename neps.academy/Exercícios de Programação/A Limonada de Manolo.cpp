#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int c, n, result = 0;

    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        if (n != 1 && i != 0 && c > 1)
            c--;
        result += c;
    }

    cout << result << endl;

    return 0;
}