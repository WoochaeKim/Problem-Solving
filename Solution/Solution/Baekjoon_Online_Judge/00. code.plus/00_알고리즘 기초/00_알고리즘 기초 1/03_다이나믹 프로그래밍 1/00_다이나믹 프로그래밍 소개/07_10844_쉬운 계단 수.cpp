#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int DIGIT_SIZE{ 9 }, DIVISOR{ 1000000000 };
	int iNumSize{};
	cin >> iNumSize;
	
	vector<vector<int>> vecTabul(iNumSize + 1, vector<int>(DIGIT_SIZE + 1));

	for (int& iNumSizeOneElems : vecTabul[1])
		iNumSizeOneElems = 1;

	vecTabul[1][0] = 0;

	for (int iCntNumSize{ 2 }; iCntNumSize <= iNumSize; ++iCntNumSize)
	{
		for (int iCntDigit{}; iCntDigit <= DIGIT_SIZE; ++iCntDigit)
		{
			if (0 != iCntDigit)
				vecTabul[iCntNumSize][iCntDigit] += vecTabul[iCntNumSize - 1][iCntDigit - 1];
			if (9 != iCntDigit)
				vecTabul[iCntNumSize][iCntDigit] += vecTabul[iCntNumSize - 1][iCntDigit + 1];

			vecTabul[iCntNumSize][iCntDigit] %= DIVISOR;
		}
	}

	long long llNumStair{};

	for (int& iNumStair : vecTabul[iNumSize])
		llNumStair += iNumStair;

	cout << llNumStair % DIVISOR;

	return 0;
}