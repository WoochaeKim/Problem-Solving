#include <iostream>

using namespace std;

int GetLCM(int& _iNumA, int& _iNumB)
{
	int iProd{ _iNumA * _iNumB };
	int iRem{};

	while (0 != _iNumB)
	{
		iRem = _iNumA % _iNumB;
		_iNumA = _iNumB;
		_iNumB = iRem;
	}

	return iProd / _iNumA;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCast{}, iNumInputA{}, iNumInputB{};
	cin >> iTestCast;

	while (iTestCast--)
	{
		cin >> iNumInputA >> iNumInputB;
		cout << GetLCM(iNumInputA, iNumInputB) << '\n';
	}

	return 0;
}