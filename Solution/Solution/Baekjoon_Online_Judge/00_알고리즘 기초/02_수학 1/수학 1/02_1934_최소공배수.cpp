#include <iostream>

using namespace std;

int GetGCD(int _iNumA, int _iNumB)
{
	while (0 != _iNumB)
	{
		int iRem = _iNumA % _iNumB;
		_iNumA = _iNumB;
		_iNumB = iRem;
	}

	return _iNumA;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumT, iNumA, iNumB;

	cin >> iNumT;

	while (iNumT--)
	{
		cin >> iNumA >> iNumB;
		cout << (iNumA * iNumB) / GetGCD(iNumB, iNumA % iNumB) << '\n';
	}

	return 0;
}