#include <iostream>
#include <vector>

#define endl '\n'
#define forn(k, x) for (int i = k; i < x; i++)
#define ii long long
#define pb push_back

using namespace std;

int main()
{

    vector<char> ganhadores[5];

    for (int i = 65; i < 81; i++)
        ganhadores[0].pb(i);

    forn(1, 5)
    {

        for (int j = 0; j < ganhadores[i - 1].size(); j += 2)
        {
            int in, in2;
            cin >> in >> in2;
            if (in > in2)
                ganhadores[i].pb(ganhadores[i - 1][j]);
            else
                ganhadores[i].pb(ganhadores[i - 1][j + 1]);
        }
    }

    cout << ganhadores[4][0] << endl;

    return 0;
}