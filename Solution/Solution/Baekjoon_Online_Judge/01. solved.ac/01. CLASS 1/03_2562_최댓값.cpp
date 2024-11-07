#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iMaxNum{}, iIdxMaxNum{};

	for (int iCntIdx{ 1 }; iCntIdx <= 9; ++iCntIdx)
	{
		cin >> iNumInput;

		if (iMaxNum < iNumInput)
		{
			iMaxNum = iNumInput;
			iIdxMaxNum = iCntIdx;
		}
	}

	cout << iMaxNum << '\n' << iIdxMaxNum;

	return 0;
}