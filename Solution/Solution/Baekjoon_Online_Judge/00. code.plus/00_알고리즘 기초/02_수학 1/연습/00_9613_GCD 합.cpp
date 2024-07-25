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

	int iInput, iTestCase{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		int iNumElements{};
		long long llSum{};
		vector<int> vecDigitBuff{};

		cin >> iNumElements;

		while (iNumElements--)
		{
			cin >> iInput;
			vecDigitBuff.emplace_back(iInput);
		}

		int iLastIdx{ static_cast<int>(vecDigitBuff.size() - 1) };
		
		for (int iPivotIdx = 0; iPivotIdx < iLastIdx; iPivotIdx++)
		{
			for (int iOffsetIdx = iPivotIdx; iOffsetIdx < iLastIdx; iOffsetIdx++)
			{
				llSum += GetGCD(vecDigitBuff[iPivotIdx], vecDigitBuff[iOffsetIdx + 1]);
			}
		}

		cout << llSum << '\n';
	}

	return 0;
}