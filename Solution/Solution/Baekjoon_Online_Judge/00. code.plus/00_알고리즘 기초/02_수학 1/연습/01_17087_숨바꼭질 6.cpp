#include <iostream>

using namespace std;

void GetGCD(int& _iNumA, int _iNumB)
{
	while (0 != _iNumB)
	{
		int iRem{ _iNumA % _iNumB };
		_iNumA = _iNumB;
		_iNumB = iRem;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumBro{}, iMyPos{}, iNextBroPos{};
	cin >> iNumBro >> iMyPos >> iNextBroPos;

	int iCurBroPosGCD{ abs(iMyPos - iNextBroPos) };

	if (1 < iNumBro)
	{
		while (--iNumBro)
		{
			cin >> iNextBroPos;
			GetGCD(iCurBroPosGCD, abs(iMyPos - iNextBroPos));
		}
	}
	
	cout << iCurBroPosGCD;

	return 0;
}