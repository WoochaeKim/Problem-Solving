#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> g_vecMemo{};
const int iDivisor{ 1000000009 };

int NumOfSumExpr(int _iNum, int _iNumLastSum)
{
	_iNumLastSum = (_iNumLastSum < 1) ? 3 : ((_iNumLastSum > 3) ? 1 : _iNumLastSum);

	if (0 < g_vecMemo[_iNum][_iNumLastSum])
		return g_vecMemo[_iNum][_iNumLastSum];
	
	int iNumArg{ _iNum - _iNumLastSum };
	if (0 == iNumArg)
		return 1;
	if (0 > iNumArg)
		return 0;
	
	g_vecMemo[_iNum][_iNumLastSum] = 
		((NumOfSumExpr(iNumArg, _iNumLastSum - 1) % iDivisor) + 
		(NumOfSumExpr(iNumArg, _iNumLastSum + 1) % iDivisor)) % iDivisor;

	return g_vecMemo[_iNum][_iNumLastSum];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iNumInput{}, iMaxInput{};
	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iNumInput;

		if (iMaxInput < iNumInput)
		{
			iMaxInput = iNumInput;
			g_vecMemo.resize(iNumInput + 1, vector<int>(4));
		}

		long long llNumOutput{};
		for (int iCntLastNum{ 1 }; iCntLastNum <= 3; ++iCntLastNum)
			llNumOutput += static_cast<long long>(NumOfSumExpr(iNumInput, iCntLastNum));

		cout << llNumOutput % iDivisor << '\n';
	}

	return 0;
}