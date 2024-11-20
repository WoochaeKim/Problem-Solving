#include <iostream>
#include <vector>

using namespace std;

vector<int> g_vecSeqElems{};
vector<int> g_vecSubSeqSize{};
vector<int> g_vecPreIndex{};

void SequencePrint(int _iLISLastIdx)
{
	if (0 > _iLISLastIdx)
		return;

	SequencePrint(g_vecPreIndex[_iLISLastIdx]);

	cout << g_vecSeqElems[_iLISLastIdx] << ' ';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iOriginSeqSize{}, iLISLastIdx{}, iPreIndex{};
	cin >> iOriginSeqSize;

	g_vecSeqElems.resize(iOriginSeqSize);
	g_vecSubSeqSize.resize(iOriginSeqSize, 1);
	g_vecPreIndex.resize(iOriginSeqSize, -1);

	for (int& iElem : g_vecSeqElems)
		cin >> iElem;

	for (int iCntOriginIdx{ 1 }; iCntOriginIdx < iOriginSeqSize; ++iCntOriginIdx)
	{
		for (int iCntSubSeqIdx{}; iCntSubSeqIdx < iCntOriginIdx; ++iCntSubSeqIdx)
		{
			if (g_vecSeqElems[iCntSubSeqIdx] < g_vecSeqElems[iCntOriginIdx]
				&& g_vecSubSeqSize[iCntSubSeqIdx] >= g_vecSubSeqSize[iCntOriginIdx])
			{
				g_vecSubSeqSize[iCntOriginIdx] = g_vecSubSeqSize[iCntSubSeqIdx] + 1;
				g_vecPreIndex[iCntOriginIdx] = iCntSubSeqIdx;

				if (g_vecSubSeqSize[iLISLastIdx] < g_vecSubSeqSize[iCntOriginIdx])
					iLISLastIdx = iCntOriginIdx;
			}
		}
	}

	cout << g_vecSubSeqSize[iLISLastIdx] << '\n';
	SequencePrint(iLISLastIdx);

	return 0;
}