#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{

    float n1, n2, media;
    string s = "Final";

    cin >> n1 >> n2;

    media = ((n1 * 2) + (n2 * 3)) / 5;

    if (media >= 7)
        s = "Aprovado";
    else if (media < 3)
        s = "Reprovado";

    cout << s << endl;

    return 0;
}