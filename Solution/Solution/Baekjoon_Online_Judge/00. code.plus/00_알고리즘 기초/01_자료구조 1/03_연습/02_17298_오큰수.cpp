#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSeqSize{};
	vector<int> vecSeq{}, vecNGE;
	stack<int> stkSeqIdxBuff{};

	cin >> iSeqSize;
	vecSeq.resize(iSeqSize);
	vecNGE.resize(iSeqSize);
	fill(vecNGE.begin(), vecNGE.end(), -1);

	for (int iCntSeqIdx = 0; iCntSeqIdx < iSeqSize; ++iCntSeqIdx)
		cin >> vecSeq[iCntSeqIdx];
	
	--iSeqSize;

	for (int iCntSeqIdx = 0; iCntSeqIdx < iSeqSize; ++iCntSeqIdx)
	{
		stkSeqIdxBuff.push(iCntSeqIdx);

		while (!stkSeqIdxBuff.empty() && vecSeq[stkSeqIdxBuff.top()] < vecSeq[iCntSeqIdx + 1])
		{
			vecNGE[stkSeqIdxBuff.top()] = vecSeq[iCntSeqIdx + 1];
			stkSeqIdxBuff.pop();
		}
	}
	/*
	while (!stkSeqIdxBuff.empty())
	{
		vecNGE[stkSeqIdxBuff.top()] = -1;
		stkSeqIdxBuff.pop();
	}
	*/
	for (const int& iNumNGE : vecNGE)
		cout << iNumNGE << ' ';

	return 0;
}