#include <iostream>
#include <cmath>

#define endl '\n'

using namespace std;

int main()
{

    int num = 0;
    float x = 0, y = 0;

    cin >> num;

    cout.precision(4);

    for (int i = 0; i < num; i++)
    {
        cin >> x;
        y = sqrt(x);
        cout << fixed << y << endl;
    }

    return 0;
}