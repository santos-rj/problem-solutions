#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    int n, in, maior = -9999, menor = 9999;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (in > maior)
            maior = in;
        if (in < menor)
            menor = in;
    }

    cout << maior << endl;
    cout << menor << endl;

    return 0;
}