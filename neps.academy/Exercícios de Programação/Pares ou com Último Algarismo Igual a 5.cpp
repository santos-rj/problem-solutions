#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int in, cont = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> in;

        if ((in % 2 == 0) || (in % 5 == 0))
            cont++;
    }

    cout << cont << endl;

    return 0;
}