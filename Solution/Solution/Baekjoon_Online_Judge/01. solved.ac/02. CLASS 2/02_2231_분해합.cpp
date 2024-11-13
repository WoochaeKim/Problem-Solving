/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iRemaining{}, iMaxExp{};
	cin >> iNumInput;

	iRemaining = iNumInput;

	while (iRemaining /= 10)
		++iMaxExp;

	vector<int> vecDigitBuff{};
	vecDigitBuff.reserve(iMaxExp + 1);

	int iMinCtor{ iNumInput - ((iMaxExp + 1) * 9) };
	if (1 > iMinCtor)
		iMinCtor = 1;

	iRemaining = iMinCtor;
	while (iRemaining)
	{
		vecDigitBuff.emplace_back(iRemaining % 10);
		iRemaining /= 10;
	}

	for (iMinCtor; iMinCtor < iNumInput; ++iMinCtor)
	{
		int iDigitSum{};

		for (const int& iDigit : vecDigitBuff)
			iDigitSum += iDigit;

		if (iNumInput == iMinCtor + iDigitSum)
			break;

		++vecDigitBuff.front();

		for (int iCntExp{}; iCntExp < iMaxExp; ++iCntExp)
		{
			if (10 <= vecDigitBuff[iCntExp])
			{
				vecDigitBuff[iCntExp] -= 10;

				if (iCntExp + 1 < vecDigitBuff.size())
					++vecDigitBuff[iCntExp + 1];
				else
					vecDigitBuff.push_back(1);
			}
			else
				break;
		}
	}

	if (iNumInput <= iMinCtor)
		iMinCtor = 0;

	cout << iMinCtor;

	return 0;
}

*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iRemaining{}, iMaxExp{};
	cin >> iNumInput;

	iRemaining = iNumInput;

	while (iRemaining /= 10)
		++iMaxExp;

	int iMinCtor{ iNumInput - ((iMaxExp + 1) * 9) };

	if (1 > iMinCtor)
		iMinCtor = 1;

	for (iMinCtor; iMinCtor < iNumInput; ++iMinCtor)
	{
		int iDigitSum{};
		int iRemaining{ iMinCtor };

		while (iRemaining)
		{
			iDigitSum += iRemaining % 10;
			iRemaining /= 10;
		}

		if (iNumInput == iMinCtor + iDigitSum)
			break;
	}

	if (iNumInput <= iMinCtor)
		iMinCtor = 0;

	cout << iMinCtor;

	return 0;
}
