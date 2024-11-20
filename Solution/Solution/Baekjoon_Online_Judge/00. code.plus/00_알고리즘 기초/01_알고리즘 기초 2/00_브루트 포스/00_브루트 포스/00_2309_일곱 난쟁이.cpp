#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int NUM_DWARF{ 9 };
	int iSumSize{};
	array<int, NUM_DWARF> arrDwarfSize{};

	for (auto& iDwarfSize : arrDwarfSize)
	{
		cin >> iDwarfSize;
		iSumSize += iDwarfSize;
	}

	sort(arrDwarfSize.begin(), arrDwarfSize.end());

	bool bIsFound{};

	for (int iCntFst{}; !bIsFound && iCntFst < NUM_DWARF; ++iCntFst)
	{
		for (int iCntSnd{}; iCntSnd != iCntFst && iCntSnd < NUM_DWARF; ++iCntSnd)
		{
			if (100 == iSumSize - arrDwarfSize[iCntFst] - arrDwarfSize[iCntSnd])
			{
				arrDwarfSize[iCntFst] = arrDwarfSize[iCntSnd] = -1;
				bIsFound = true;
				break;
			}
		}
	}

	for (auto& iDwarfSize : arrDwarfSize)
	{
		if (0 <= iDwarfSize)
			cout << iDwarfSize << '\n';
	}

	return 0;
}