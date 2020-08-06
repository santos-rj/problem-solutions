#include <iostream>
#include <string>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl '\n'
#define forn(k, x) for (int i = k; i < x; i++)
#define ii long long
#define pb push_back

using namespace std;

int main()
{
    desync;

    string in;

    cin >> in;
    cin.ignore();

    int tamanho = in.length();

    cout << tamanho << endl;

    return 0;
}