#include <iostream>
#include <string>
#include <stack>

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

    bool auth;
    int n;
    stack<char> stk;
    string in, seq;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, in);

        int tamanho = in.length();
        for (int j = 0; j < tamanho; j++)
        {
            if (in[j] == '{' || in[j] == '}')
            {
                seq += in[j];
            }
        }
    }

    auth = true;
    for (int i = 0; i < n; i++)
    {
        if (seq[i] == '{')
        {
            stk.push(seq[i]);
        }
        else
        {
            if (stk.empty())
            {
                auth = false;
                break;
            }
            char aux = stk.top();

            stk.pop();

            if (aux == '}')
            {
                auth = false;
                break;
            }
        }

        cout << auth << endl;
    }

    if (!stk.empty())
    {
        auth = false;
        while (!stk.empty())
            stk.pop();
    }

    if (auth == true)
    {
        cout << 'S';
    }
    else
    {
        cout << 'N';
    }
    cout << endl;

    return 0;
}