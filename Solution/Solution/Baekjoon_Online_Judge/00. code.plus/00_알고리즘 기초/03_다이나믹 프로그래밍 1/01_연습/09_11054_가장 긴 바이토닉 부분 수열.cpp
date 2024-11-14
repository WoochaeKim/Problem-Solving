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

	vector<int> vecSeq(iSeqSize);
	vector<int> vecLIS(iSeqSize, 1);
	vector<int> vecLDS(iSeqSize, 1);

	for (int& iElem : vecSeq)
		cin >> iElem;

	for (int iCntOrigin{ 1 }; iCntOrigin < iSeqSize; ++iCntOrigin)
	{
		for (int iCntSub{}; iCntSub < iCntOrigin; ++iCntSub)
		{
			if (vecSeq[iCntSub] < vecSeq[iCntOrigin] && vecLIS[iCntSub] >= vecLIS[iCntOrigin])
				vecLIS[iCntOrigin] = vecLIS[iCntSub] + 1;
		}
	}

	for (int iCntOrigin{ iSeqSize - 2 }; iCntOrigin >= 0; --iCntOrigin)
	{
		for (int iCntSub{ iCntOrigin + 1 }; iCntSub < iSeqSize; ++iCntSub)
		{
			if (vecSeq[iCntSub] < vecSeq[iCntOrigin] && vecLDS[iCntSub] >= vecLDS[iCntOrigin])
				vecLDS[iCntOrigin] = vecLDS[iCntSub] + 1;
		}
	}

	int iLenBitonic{}, iMaxLen{};
	for (int iCntIdx{}; iCntIdx < iSeqSize; ++iCntIdx)
	{
		iLenBitonic = vecLIS[iCntIdx] + vecLDS[iCntIdx] - 1;

		if (iMaxLen < iLenBitonic)
			iMaxLen = iLenBitonic;
	}

	cout << iMaxLen;

	return 0;
}