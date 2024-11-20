#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int iDivisor{ 1000000009 };
	int iTestCase{}, iTargetNum{}, iMaxTarget{-1};
	vector<int> vecTargetBuff{}, vecTabul(4);
	vecTabul[1] = 1; vecTabul[2] = 2; vecTabul[3] = 4;

	cin >> iTestCase;
	vecTargetBuff.reserve(iTestCase);

	while (iTestCase--)
	{
		cin >> iTargetNum;
		vecTargetBuff.emplace_back(iTargetNum);

		if (iMaxTarget < iTargetNum)
			iMaxTarget = iTargetNum;
	}

	vecTabul.resize(iMaxTarget + 1);

	for (int iCntIdx{ 4 }; iCntIdx <= iMaxTarget; ++iCntIdx)
	{
		vecTabul[iCntIdx] =
			(((vecTabul[iCntIdx - 1] % iDivisor + vecTabul[iCntIdx - 2] % iDivisor) % iDivisor) +
				vecTabul[iCntIdx - 3] % iDivisor) % iDivisor;
	}

	for (int& iTarget : vecTargetBuff)
		cout << vecTabul[iTarget] << '\n';

	return 0;
}