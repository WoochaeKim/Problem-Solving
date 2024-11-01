#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iNumInput{}, iNumPrime{};
	cin >> iTestCase;

	while (iTestCase--)
	{
		bool bIsPrime{true};

		cin >> iNumInput;

		for (int iCntIdx = 2; iCntIdx * iCntIdx < iNumInput; ++iCntIdx)
		{
			if (0 == iNumInput % iCntIdx)
			{
				bIsPrime = false;
				break;
			}
		}

		if (1 < iNumInput && bIsPrime)
			++iNumPrime;
	}

	cout << iNumPrime;

	return 0;
}