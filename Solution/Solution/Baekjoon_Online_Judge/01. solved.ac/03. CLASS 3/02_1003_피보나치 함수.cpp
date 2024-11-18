#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumLoop{}, iInputNum{}, iMaxNum{};
	cin >> iNumLoop;

	vector<int> vecNumBuff{};
	vecNumBuff.reserve(iNumLoop);

	while (iNumLoop--)
	{
		cin >> iInputNum;
		vecNumBuff.emplace_back(iInputNum);

		if (iMaxNum < iInputNum)
			iMaxNum = iInputNum;
	}

	if (0 == iMaxNum)
		++iMaxNum;

	vector<vector<int>> vecTabul(iMaxNum + 1, vector<int>(2));
	vecTabul[0][0] = 1; vecTabul[1][1] = 1;

	for (int iCntNum{ 2 }; iCntNum <= iMaxNum; ++iCntNum)
	{
		vecTabul[iCntNum][0] = vecTabul[iCntNum - 1][0] + vecTabul[iCntNum - 2][0];
		vecTabul[iCntNum][1] = vecTabul[iCntNum - 1][1] + vecTabul[iCntNum - 2][1];
	}

	for (const int iNum : vecNumBuff)
		cout << vecTabul[iNum][0] << ' ' << vecTabul[iNum][1] << '\n';

	return 0;
}