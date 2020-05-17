#include <iostream>

using namespace std;

string title(string F)
{
    int t = F.length();

    for (int i = 0; i < t; i++)
    {
        if (F[i] >= 97 && F[i] <= 122)
        {
            if (i == 0 || F[i - 1] == 32)
            {
                F[i] = F[i] - 32;
            }
        }
        else if (F[i] >= 65 && F[i] <= 90)
        {
            if (i != 0 && F[i - 1] != ' ')
            {
                F[i] = F[i] + 32;
            }
        }
    }

    return F;
}

int main()
{
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}
