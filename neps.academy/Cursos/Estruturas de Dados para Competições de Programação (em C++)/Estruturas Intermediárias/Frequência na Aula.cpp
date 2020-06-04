#include <iostream>
#include <set>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    long long n, in;
    set<long long> lista;

    cin >> n;

    while (n--)
    {
        cin >> in;
        lista.insert(in);
    }

    cout << *lista.end() << endl;

    return 0;
}