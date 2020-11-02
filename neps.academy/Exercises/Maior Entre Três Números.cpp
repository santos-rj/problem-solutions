#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int in, maior = -99999;

    for (int i = 0; i < 3; i++)
    {
        cin >> in;
        if (in > maior)
            maior = in;
    }

    cout << maior << endl;

    return 0;
}