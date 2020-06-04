#include <iostream>
#include <string>
#include <vector>
#include <stack>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

    bool auth = true;
    int n;
    string in;
    vector<char> chaves;
    stack<char> stk;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, in);

        for (int j = 0; in[j] != '\0'; j++)
        {
            if (in[j] == '{' || in[j] == '}')
            {
                chaves.pb(in[j]);
            }
        }
    }

    for (int j = 0; chaves[j] != '\0'; j++)
    {
        if (chaves[j] == '{')
        {
            stk.push(chaves[j]);
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

            if ((chaves[j] == '}' && aux != '{'))
            {
                auth = false;
                break;
            }
        }
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