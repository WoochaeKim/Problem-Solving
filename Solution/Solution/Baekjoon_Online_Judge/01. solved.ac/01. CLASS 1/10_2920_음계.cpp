#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iLastNum{}, iOffset{};
	string strResult{ "mixed" };

	cin >> iNumInput;

	switch (iNumInput)
	{
		case 1:
			strResult = "ascending";
			iOffset = 1;
			break;

		case 8:
			strResult = "descending";
			iOffset = -1;
			break;
	}

	if ("mixed" != strResult)
	{
		for (int iCntIdx{ 2 }; iCntIdx <= 8; ++iCntIdx)
		{
			iLastNum = iNumInput;
			cin >> iNumInput;

			if (iLastNum - iNumInput + iOffset)
			{
				strResult = "mixed";
				break;
			}
		}
	}

	cout << strResult;

	return 0;
}