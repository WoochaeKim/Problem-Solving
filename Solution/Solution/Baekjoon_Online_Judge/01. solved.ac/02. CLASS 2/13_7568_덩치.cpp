#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	enum TYPE_BODY {WEIGHT, HEIGHT, RANK, END};

	int iNumPeople{};
	cin >> iNumPeople;

	vector<vector<int>> vecBodySize(iNumPeople, vector<int>(TYPE_BODY::END, 1));

	for (int iCntIdx{}; iCntIdx < iNumPeople; ++iCntIdx)
		cin >> vecBodySize[iCntIdx][WEIGHT] >> vecBodySize[iCntIdx][HEIGHT];

	for (int iCntBase{}; iCntBase < iNumPeople; ++iCntBase)
	{
		for (int iCntTgt{}; iCntTgt < iNumPeople; ++iCntTgt)
		{
			if (vecBodySize[iCntBase][WEIGHT] < vecBodySize[iCntTgt][WEIGHT]
				&& vecBodySize[iCntBase][HEIGHT] < vecBodySize[iCntTgt][HEIGHT])
			{
				vecBodySize[iCntBase][RANK] += 1;
			}
		}
	}

	for (vector<int>& BodySize : vecBodySize)
		cout << BodySize[RANK] << ' ';

	return 0;
}