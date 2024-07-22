// Notes
// ¹Ý·Ê 4
// iSqrt * iSqrt < iInput

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumT, iInput, iCntPrime{};

	cin >> iNumT;

	while (iNumT--)
	{
		bool bIsPrime{ true };

		cin >> iInput;

		if (2 > iInput)
			continue;
		
		for (int iSqrt = 2; iSqrt * iSqrt <= iInput; iSqrt++)
		{
			if (0 == iInput % iSqrt)
			{
				bIsPrime = false;
				break;
			}
		}

		iCntPrime += bIsPrime ? 1 : 0;
	}

	cout << iCntPrime;

	return 0;
}