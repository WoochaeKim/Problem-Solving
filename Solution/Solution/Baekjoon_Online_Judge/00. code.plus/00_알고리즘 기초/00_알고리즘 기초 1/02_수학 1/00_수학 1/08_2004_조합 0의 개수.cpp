#include <iostream>

using namespace std;

int GetNumExp(const int _iNum, const int _iBase)
{
	long long llNumExp{}, llNum{ static_cast<long long>(_iNum) }, llBase{ static_cast<long long>(_iBase) };

	for (long long llCntBaseMul{ llBase }; llCntBaseMul <= llNum; llCntBaseMul *= llBase)
		llNumExp += llNum / llCntBaseMul;

	return static_cast<int>(llNumExp);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int Zero{0}, TWO{ 2 }, FIVE{ 5 };
	int iNumN{}, iNumM{}, iNumZeroDigit{};
	
	cin >> iNumN >> iNumM;

	if (0 == iNumM || iNumN == iNumM)
		iNumZeroDigit = 0;
	else
	{
		int iTwoExp = GetNumExp(iNumN, TWO) - (GetNumExp(iNumN - iNumM, TWO) + GetNumExp(iNumM, TWO));
		int iFiveExp = GetNumExp(iNumN, FIVE) - (GetNumExp(iNumN - iNumM, FIVE) + GetNumExp(iNumM, FIVE));
		
		iNumZeroDigit = max(min(iTwoExp, iFiveExp), Zero);
	}

	cout << iNumZeroDigit;

	return 0;
}