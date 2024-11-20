#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int LAST_DIGIT{ 9 }, DIVISOR{ 10007 };
	int iNumSize{}, iSumCase{};
	cin >> iNumSize;

	vector<vector<int>> vecTabul(iNumSize + 1, vector<int>(LAST_DIGIT + 1));
	fill(vecTabul[1].begin(), vecTabul[1].end(), 1);

	for (int iCntSize{ 2 }; iCntSize <= iNumSize; ++iCntSize)
	{
		for (int iCntDigit{}; iCntDigit <= LAST_DIGIT; ++iCntDigit)
		{
			for (int iCntInner{}; iCntInner <= iCntDigit; ++iCntInner)
			{
				vecTabul[iCntSize][iCntDigit] += vecTabul[iCntSize - 1][iCntInner];
				vecTabul[iCntSize][iCntDigit] %= DIVISOR;
			}
		}
	}

	for (int& iNumCase : vecTabul[iNumSize])
		iSumCase += iNumCase;

	cout << iSumCase % DIVISOR;

	return 0;
}