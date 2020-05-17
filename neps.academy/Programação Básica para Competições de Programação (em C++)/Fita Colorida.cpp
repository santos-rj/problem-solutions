#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main()
{

    int n = 0;

    cin >> n;

    int fita[n];

    for (int i = 0; i < n; i++)
    {
        cin >> fita[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (fita[i] == -1)
        {
            fita[i] = 10;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        fita[i] = min(9, min(fita[i], fita[i - 1] + 1));
    }

    for (int i = n - 2; i >= 0; i--)
    {
        fita[i] = min(9, min(fita[i], fita[i + 1] + 1));
    }

    for (int i = 0; i < n; i++)
    {
        cout << fita[i];
        if (i == n - 1)
        {
            cout << endl;
        }
        else
        {
            cout << ' ';
        }
    }

    return 0;
}

double min(double a, double b)
{
    double menor;
    if (a < b)
    {
        menor = a;
    }
    else
    {
        menor = b;
    }
    return menor;
}