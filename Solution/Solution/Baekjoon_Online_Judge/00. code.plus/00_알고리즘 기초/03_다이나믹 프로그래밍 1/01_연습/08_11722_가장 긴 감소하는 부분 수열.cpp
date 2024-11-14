#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSeqSize{}, iMaxLenIdx{};
	cin >> iSeqSize;

	vector<int> vecSeq(iSeqSize);
	vector<int> vecTabul(iSeqSize, 1);

	for (int& iElem : vecSeq)
		cin >> iElem;

	int iMaxIdx{ iSeqSize - 1 };
	for (int iCntOrigin{ iSeqSize - 2 }; iCntOrigin >= 0; --iCntOrigin)
	{
		for (int iCntSub{ iCntOrigin + 1 }; iCntSub <= iMaxIdx; ++iCntSub)
		{
			if (vecSeq[iCntSub] < vecSeq[iCntOrigin] &&
				vecTabul[iCntSub] >= vecTabul[iCntOrigin])
			{
				vecTabul[iCntOrigin] = vecTabul[iCntSub] + 1;

				if (vecTabul[iMaxLenIdx] < vecTabul[iCntOrigin])
					iMaxLenIdx = iCntOrigin;
			}
		}
	}

	cout << vecTabul[iMaxLenIdx];

	return 0;
}