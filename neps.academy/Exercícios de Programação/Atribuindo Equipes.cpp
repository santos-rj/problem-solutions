#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int a, b, c, d, p1, p2, p3, menor;

    cin >> a >> b >> c >> d;

    p1 = (a + b) - (c + d);
    if (p1 < 0)
        p1 = p1 * -1;

    p2 = (a * c) - (b + d);
    if (p2 < 0)
        p2 = p2 * -1;

    p3 = (a + d) - (b + c);
    if (p3 < 0)
        p3 = p3 * -1;

    if (p1 <= p2 && p1 <= p3)
    {
        menor = p1;
    }
    else if (p2 <= p1 && p2 <= p3)
    {
        menor = p2;
    }
    else if (p3 <= p1 && p3 <= p2)
    {
        menor = p3;
    }

    cout << menor << endl;

    return 0;
}