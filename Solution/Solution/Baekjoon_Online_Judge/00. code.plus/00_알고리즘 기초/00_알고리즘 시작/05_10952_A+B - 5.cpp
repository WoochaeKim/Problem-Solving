#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInputA, iNumInputB;

	while (true)
	{
		cin >> iNumInputA >> iNumInputB;
		if (0 == iNumInputA && 0 == iNumInputB)
			break;

		cout << iNumInputA + iNumInputB << '\n';
	}

	return 0;
}