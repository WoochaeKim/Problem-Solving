#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumTestCase, iNumInputA, iNumInputB;

	cin >> iNumTestCase;

	for (int iCnt = 1; iCnt <= iNumTestCase; iCnt++)
	{
		cin >> iNumInputA >> iNumInputB;
		cout << "Case #" << iCnt << ": " << iNumInputA + iNumInputB << '\n';
	}

	return 0;
}