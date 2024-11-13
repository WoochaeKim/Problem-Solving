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
