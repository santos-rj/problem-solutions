#include <iostream>
#include <algorithm>
#include <vector>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int in;
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        cin >> in;
        v.pb(in);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}