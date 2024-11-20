#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int iSeqSize{}, iMaxSumIdx{};
	cin >> iSeqSize;

	vector<int> vecSeq(iSeqSize);
	for (int& iElem : vecSeq)
		cin >> iElem;

	vector<int> vecTabul(vecSeq);

	for (int iCntOriginIdx{1}; iCntOriginIdx < iSeqSize; ++iCntOriginIdx)
	{
		for (int iCntSubIdx{}; iCntSubIdx < iCntOriginIdx; ++iCntSubIdx)
		{
			if (vecSeq[iCntSubIdx] < vecSeq[iCntOriginIdx] &&
				vecTabul[iCntSubIdx] + vecSeq[iCntOriginIdx] > vecTabul[iCntOriginIdx])
			{
				vecTabul[iCntOriginIdx] = vecTabul[iCntSubIdx] + vecSeq[iCntOriginIdx];

				if (vecTabul[iMaxSumIdx] < vecTabul[iCntOriginIdx])
					iMaxSumIdx = iCntOriginIdx;
			}
		}
	}

	cout << vecTabul[iMaxSumIdx];

	return 0;
}