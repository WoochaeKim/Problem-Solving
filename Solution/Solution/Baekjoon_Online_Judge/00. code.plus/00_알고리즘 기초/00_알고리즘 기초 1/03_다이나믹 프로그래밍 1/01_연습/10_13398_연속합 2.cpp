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

	vector<int> vecTabul_L(iSeqSize);
	for (int& iElem : vecTabul_L)
		cin >> iElem;

	vector<int> vecTabul_R(vecTabul_L);

	int iMaxSubSeqSum{ vecTabul_L.front() };
	for (int iCntIdx{ 1 }; iCntIdx < iSeqSize; ++iCntIdx)
	{
		if (vecTabul_L[iCntIdx] < vecTabul_L[iCntIdx - 1] + vecTabul_L[iCntIdx])
			vecTabul_L[iCntIdx] += vecTabul_L[iCntIdx - 1];

		if (iMaxSubSeqSum < vecTabul_L[iCntIdx])
			iMaxSubSeqSum = vecTabul_L[iCntIdx];
	}

	for (int iCntIdx{ iSeqSize - 2 }; iCntIdx >= 0; --iCntIdx)
	{
		if (vecTabul_R[iCntIdx] < vecTabul_R[iCntIdx + 1] + vecTabul_R[iCntIdx])
			vecTabul_R[iCntIdx] += vecTabul_R[iCntIdx + 1];
	}

	for (int iCntIdx{ 1 }; iCntIdx < iSeqSize - 1; ++iCntIdx)
	{
		if (iMaxSubSeqSum < vecTabul_L[iCntIdx - 1] + vecTabul_R[iCntIdx + 1])
			iMaxSubSeqSum = vecTabul_L[iCntIdx - 1] + vecTabul_R[iCntIdx + 1];
	}

	cout << iMaxSubSeqSum;

	return 0;
}