#include <iostream>
#include <vector>
#include <algorithm>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{

    desync;

    int in;
    vector<int> par, impar;

    for (int i = 0; i < 10; i++)
    {
        cin >> in;

        if (in % 2 == 0)
        {
            par.push_back(in);
        }
        else
        {
            impar.push_back(in);
        }
    }

    int tp = par.size(), ti = impar.size();

    for (int i = 0; i < tp; i++)
    {
        cout << par[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < ti; i++)
    {
        cout << impar[i] << ' ';
    }
    cout << endl;

    return 0;
}