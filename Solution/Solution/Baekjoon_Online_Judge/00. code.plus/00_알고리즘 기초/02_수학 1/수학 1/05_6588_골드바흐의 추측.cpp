#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int FIRST_EVEN_PRIME{ 2 }, FIRST_ODD_PRIME{ 3 };
	int iNumInput{}, iNumMax{};
	vector<int> vecEvenBuff{};

	while (true)
	{
		cin >> iNumInput;

		if (0 == iNumInput)
			break;

		iNumMax = max(iNumInput, iNumMax);
		vecEvenBuff.emplace_back(iNumInput);
	}

	vector<bool> vecComposite(iNumMax + 1);

	for (int iCntNum = FIRST_EVEN_PRIME; iCntNum * iCntNum <= iNumMax; ++iCntNum)
	{
		for (int iCntNumMul{ iCntNum * iCntNum }; iCntNumMul <= iNumMax; iCntNumMul += iCntNum)
			vecComposite[iCntNumMul] = true;
	}

	for (const int& iNumEven : vecEvenBuff)
	{
		bool bIssucceed{};

		for (int iCntIdx{ FIRST_ODD_PRIME }; iCntIdx <= iNumEven; iCntIdx += FIRST_EVEN_PRIME)

		{
			if (vecComposite[iCntIdx])
				continue;

			if (false == vecComposite[iNumEven - iCntIdx])
			{
				cout << iNumEven << " = " << iCntIdx << " + " << iNumEven - iCntIdx << '\n';
				bIssucceed = true;
				break;
			}
		}

		if (!bIssucceed)
			cout << "Goldbach's conjecture is wrong." << '\n';
	}

	return 0;
}