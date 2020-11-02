#include <iostream>
#include <set>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    long long a, b, x, y, cont = 0, menor = 99999;
    set<long long> aa, bb;

    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> x;
        aa.insert(x);
    }

    for (int i = 0; i < b; i++)
    {
        cin >> y;
        bb.insert(y);
    }

    for (auto it = aa.begin(); it != aa.end(); it++)
    {
        if (!(bb.find(*it) != bb.end()))
            cont++;
    }

    menor = cont;
    cont = 0;

    for (auto it = bb.begin(); it != bb.end(); it++)
    {
        if (!(aa.find(*it) != aa.end()))
            cont++;
    }

    if (cont > menor)
        cont = menor;

    cout << cont << endl;

    return 0;
}