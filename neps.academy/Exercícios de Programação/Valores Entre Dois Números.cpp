#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;

    if (a > b)
    {
        int aux = b;
        b = a;
        a = aux;
    }

    for (int i = a; i <= b; i++)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}