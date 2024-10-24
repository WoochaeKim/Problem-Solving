#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumTestCase, iNumInputA, iNumInputB;

	cin >> iNumTestCase;

	while (iNumTestCase--)
	{
		cin >> iNumInputA >> iNumInputB;
		cout << iNumInputA + iNumInputB << '\n';
	}


	return 0;
}