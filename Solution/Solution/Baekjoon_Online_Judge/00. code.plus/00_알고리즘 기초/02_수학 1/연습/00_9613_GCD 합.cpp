#include <iostream>
#include <vector>

using namespace std;

int GetGCD(const int& _iNumA, const int& _iNumB)
{
	if (0 == _iNumB)
		return _iNumA;

	return GetGCD(_iNumB, _iNumA % _iNumB);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInput, iOutTestCase{};

	cin >> iOutTestCase;

	while (iOutTestCase--)
	{
		int iInTestCase, iSum{};
		vector<int> vecDigitBuff{};

		cin >> iInTestCase;

		while (iInTestCase--)
		{
			cin >> iInput;
			vecDigitBuff.emplace_back(iInput);
		}

		int iLastIdx{ static_cast<int>(vecDigitBuff.size() - 1) };
		
		for (int iIdxOutLoop = 0; iIdxOutLoop < iLastIdx; iIdxOutLoop++)
		{
			for (int iIdxInLoop = iIdxOutLoop; iIdxInLoop < iLastIdx; iIdxInLoop++)
			{
				iSum += GetGCD(vecDigitBuff[iIdxOutLoop], vecDigitBuff[iIdxInLoop + 1]);
			}
		}

		cout << iSum << '\n';
	}

	return 0;
}