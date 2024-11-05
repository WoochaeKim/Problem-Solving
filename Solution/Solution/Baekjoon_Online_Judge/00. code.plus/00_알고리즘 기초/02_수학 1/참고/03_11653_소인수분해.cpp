#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{};
	cin >> iNumInput;

	if (1 != iNumInput)
	{
		vector<bool> vecConposite(iNumInput + 1);

		for (int iCntNum{ 2 }; iCntNum * iCntNum <= iNumInput; ++iCntNum)
		{
			if (vecConposite[iCntNum])
				continue;

			for (int iCntNumMul{ iCntNum + iCntNum }; iCntNumMul <= iNumInput; iCntNumMul += iCntNum)
				vecConposite[iCntNumMul] = true;
		}
		
		//int iCntMax{ iNumInput >> 2 };
		
		for (int iCntIdx{ 2 }; iCntIdx <= iNumInput; ++iCntIdx)
		{
			if (vecConposite[iCntIdx])
				continue;

			while (!(iNumInput % iCntIdx))
			{
				iNumInput /= iCntIdx;
				cout << iCntIdx << '\n';
			}

			if (1 == iNumInput)
				break;
		}
	}

	return 0;
}