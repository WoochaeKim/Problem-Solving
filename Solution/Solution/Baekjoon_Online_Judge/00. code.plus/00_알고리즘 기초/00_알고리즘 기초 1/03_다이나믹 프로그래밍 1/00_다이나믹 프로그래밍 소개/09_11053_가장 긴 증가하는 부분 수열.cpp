#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iOriginSeqSize{};
	cin >> iOriginSeqSize;
	
	int iLISSize{1};
	vector<int> vecSeqElems(iOriginSeqSize);
	vector<int> vecSubSeqSize(iOriginSeqSize, 1);

	for (int& iElem : vecSeqElems)
		cin >> iElem;

	for (int iCntOriginIdx{ 1 }; iCntOriginIdx < iOriginSeqSize; ++iCntOriginIdx)
	{
		for (int iCntSubIdx{}; iCntSubIdx < iCntOriginIdx; ++iCntSubIdx)
		{
			if (vecSeqElems[iCntSubIdx] < vecSeqElems[iCntOriginIdx] 
				&& vecSubSeqSize[iCntSubIdx] >= vecSubSeqSize[iCntOriginIdx])
			{
				vecSubSeqSize[iCntOriginIdx] = vecSubSeqSize[iCntSubIdx] + 1;
			
				if (iLISSize < vecSubSeqSize[iCntOriginIdx])
					iLISSize = vecSubSeqSize[iCntOriginIdx];
			}

		}
	}
	
	cout << iLISSize;

	return 0;
}