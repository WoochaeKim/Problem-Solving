#include <iostream>

using namespace std;

int GetLCM(int _iNumA, int _iNumB, const int& _iGCD)
{
	return (_iNumA * _iNumB) / _iGCD;
}

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

	int iNumInputA{}, iNumInputB{};
	cin >> iNumInputA >> iNumInputB;

	int iGCD{ GetGCD(iNumInputA, iNumInputB) };
	int iLCM{ GetLCM(iNumInputA, iNumInputB, iGCD) };

	cout << iGCD << '\n' << iLCM;

	return 0;
}