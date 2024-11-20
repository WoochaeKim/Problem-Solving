#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	// 1차원 DP
	int iNumSize{};
	cin >> iNumSize;

	vector<long long> vecTabul(iNumSize + 1);
	vecTabul[1] = 1;

	for (int iCntNumSize{ 2 }; iCntNumSize <= iNumSize; ++iCntNumSize)
		vecTabul[iCntNumSize] = vecTabul[iCntNumSize - 1] + vecTabul[iCntNumSize - 2];

	cout << vecTabul[iNumSize];

	/* 2차원 DP
	const int BINARY_SIZE{ 2 };
	int iNumSize{};
	cin >> iNumSize;

	vector<vector<long long>> vecTabul(iNumSize + 1, vector<long long>(BINARY_SIZE));
	vecTabul[1][1] = 1;

	for (int iCntNumSize{ 2 }; iCntNumSize <= iNumSize; ++iCntNumSize)
	{
		for (int iCntBin{}; iCntBin < BINARY_SIZE; ++iCntBin)
		{
			vecTabul[iCntNumSize][iCntBin] = vecTabul[iCntNumSize - 1][0];

			if (0 == iCntBin)
				vecTabul[iCntNumSize][iCntBin] += vecTabul[iCntNumSize - 1][1];
		}
	}

	cout << vecTabul[iNumSize][0] + vecTabul[iNumSize][1];
	*/
	return 0;
}