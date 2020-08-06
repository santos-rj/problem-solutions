#include <iostream>

#define endl '\n';
#define MAX 10
#define pb push_back

using namespace std;

int main()
{

	int input, n, mD = 0, mT = 0, mQ = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (input % 2 == 0)
			mD++;
		if (input % 3 == 0)
			mT++;
		if (input % 4 == 0)
			mQ++;
	}

	cout << mD << '\n'
		 << mT << '\n'
		 << mQ << endl;

	return 0;
}