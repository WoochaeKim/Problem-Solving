#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iNumInput{}, iNumMax{};
	vector<bool> vecComposite{};
	vector<int> vecInputBuff{};

	cin >> iTestCase;
	vecInputBuff.reserve(iTestCase);

	while (iTestCase--)
	{
		cin >> iNumInput;
		
		if (iNumMax < iNumInput)
			iNumMax = iNumInput;

		vecInputBuff.emplace_back(iNumInput);
	}

	vecComposite.resize(iNumMax + 1);

	for (int iCntNum{ 2 }; iCntNum * iCntNum <= iNumMax; ++iCntNum)
	{
		if (vecComposite[iCntNum])
			continue;

		for (int iCntNumMul{ iCntNum * iCntNum }; iCntNumMul <= iNumMax; iCntNumMul += iCntNum)
			vecComposite[iCntNumMul] = true;
	}

	for (const int& iNumEven : vecInputBuff)
	{
		int iGoldbachPartition{}, iCntMax{ iNumEven >> 1};

		for (int iCntNum{ 2 }; iCntNum <= iCntMax; ++iCntNum)
		{
			if (!vecComposite[iCntNum] && !vecComposite[iNumEven - iCntNum])
				++iGoldbachPartition;
		}

		cout << iGoldbachPartition << '\n';
	}

	return 0;
}