#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSeqSize{};
	cin >> iSeqSize;

	int iMaxSubSeqSum{};
	vector<int> vecSeqElems(iSeqSize), vecTabul(iSeqSize);

	cin >> vecSeqElems.front();
	vecTabul.front() = vecSeqElems.front();
	iMaxSubSeqSum = vecTabul.front();

	for (int iCntIdx{ 1 }; iCntIdx < iSeqSize; ++iCntIdx)
	{
		cin >> vecSeqElems[iCntIdx];

		vecTabul[iCntIdx] = max(vecSeqElems[iCntIdx] + vecTabul[iCntIdx - 1], vecSeqElems[iCntIdx]);
		
		if (iMaxSubSeqSum < vecTabul[iCntIdx])
			iMaxSubSeqSum = vecTabul[iCntIdx];
	}

	cout << iMaxSubSeqSum;

	return 0;
}