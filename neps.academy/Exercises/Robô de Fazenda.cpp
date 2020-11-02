#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int n, c, s, in, pos, cont;

    cin >> n >> c >> s;

    pos = 1;
    cont = 0;

    for (int i = 1; i <= c; i++)
    {
        cin >> in;

        if (pos == s && i == 1)
            cont++;

        if (in == -1 && pos == 1)
        {
            pos = n;
        }
        else if (in == 1 && pos == n)
        {
            pos = 1;
        }
        else
        {
            pos += in;
        }

        if (pos == s)
            cont++;
    }

    cout << cont << endl;

    return 0;
}