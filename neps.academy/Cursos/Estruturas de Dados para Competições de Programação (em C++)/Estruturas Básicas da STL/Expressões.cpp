#include <iostream>
#include <stack>

#define endl '\n'
#define ii long long
#define pb push_back

using namespace std;

int main()
{

    bool auth;
    int n;
    string in;
    stack<char> stk;

    cin >> n;

    while (n--)
    {
        cin >> in;

        auth = true;
        for (int j = 0; in[j] != '\0'; j++)
        {
            if ((in[j] == '(') ||
                (in[j] == '[') ||
                (in[j] == '{'))
            {
                stk.push(in[j]);
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

                if ((in[j] == ')' && aux != '(') ||
                    (in[j] == ']' && aux != '[') ||
                    (in[j] == '}' && aux != '{'))
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
    }

    return 0;
}