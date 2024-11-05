#include <iostream>
#include <vector>

using namespace std;

int GetGCD(int _iNumA, int _iNumB)
{
	while (0 != _iNumB)
	{
		int iRem{ _iNumA % _iNumB };
		_iNumA = _iNumB;
		_iNumB = iRem;
	}

	return _iNumA;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumTestCase{};
	
	cin >> iNumTestCase;

	while (iNumTestCase--)
	{
		int iNumElements{}, iElementInput{};
		long long llSumGCD{};
		vector<int> vecBuff{};

		cin >> iNumElements;
		vecBuff.reserve(iNumElements);

		for (int iCnt{}; iCnt < iNumElements; ++iCnt)
		{
			cin >> iElementInput;
			vecBuff.emplace_back(iElementInput);
		}

		int iLastPivot{ iNumElements - 1 };

		for (int iCntPivot{}; iCntPivot < iLastPivot; ++iCntPivot)
		{
			for (int iCntOffset{ iCntPivot + 1 }; iCntOffset < iNumElements; ++iCntOffset)
				llSumGCD += static_cast<long long>(GetGCD(vecBuff[iCntPivot], vecBuff[iCntOffset]));
		}

		cout << llSumGCD << '\n';
	}

	return 0;
}