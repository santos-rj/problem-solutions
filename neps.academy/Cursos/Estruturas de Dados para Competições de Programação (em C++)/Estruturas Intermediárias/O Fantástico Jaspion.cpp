#include <iostream>
#include <map>

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL)
#define endl '\n';

using namespace std;

int main()
{

    desync;

    long long t, m, n, ant;
    string inA, inB;
    map<string, string> dicio;

    cin >> t;

    while (t--)
    {
        cin >> m >> n;
        cin.ignore();

        for (int i = 0; i < m; i++)
        {
            getline(cin, inA);
            getline(cin, inB);

            dicio.insert(make_pair(inA, inB));
        }

        for (int i = 0, auth = 0; i < n; i++, auth = 0)
        {
            getline(cin, inA);
            inB = "";
            ant = 0;

            int tamanho = inA.length();
            for (int j = 0; j < tamanho; j++)
            {
                if (inA[j] != ' ')
                {
                    inB += inA[j];
                    auth = 1;
                }
                else
                {
                    if (dicio[inB] != "")
                    {
                        if (ant != 0)
                        {
                            cout << ' ' << dicio[inB];
                            ant++;
                        }
                        else
                        {
                            cout << dicio[inB];
                            ant++;
                        }
                    }
                    else
                    {
                        if (ant != 0)
                        {
                            cout << ' ' << inB;
                            ant++;
                        }
                        else
                        {
                            cout << inB;
                            ant++;
                        }
                    }
                    inB = "";
                    auth = 0;
                }
            }

            if (auth == 1)
            {
                if (dicio[inB] != "")
                {
                    if (ant != 0)
                    {
                        cout << ' ' << dicio[inB];
                    }
                    else
                    {
                        cout << dicio[inB];
                    }
                }
                else
                {
                    if (ant != 0)
                    {
                        cout << ' ' << inB;
                    }
                    else
                    {
                        cout << inB;
                    }
                }
            }
            cout << endl;
        }

        cout << endl;
        dicio.clear();
    }
    return 0;
}