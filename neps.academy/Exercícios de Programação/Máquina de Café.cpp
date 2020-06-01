#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int a, b, c, a1, a2, a3, menor;

    cin >> a >> b >> c;

    a1 = (a * 0) + (b * 2) + (c * 4);
    a2 = (a * 2) + (b * 0) + (c * 2);
    a3 = (a * 4) + (b * 2) + (c * 0);

    if (a1 <= a2 && a1 <= a3)
    {
        menor = a1;
    }
    else if (a2 <= a1 && a2 <= a3)
    {
        menor = a2;
    }
    else if (a3 <= a1 && a3 <= a2)
    {
        menor = a3;
    }

    cout << menor << endl;

    return 0;
}