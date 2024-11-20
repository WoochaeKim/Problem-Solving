#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSeqSize{};
	vector<int> vecSeq{}, vecNGF{};
	stack<int> stkSeqIdxBuff{};
	unordered_map<int, int> umapFreq{};

	cin >> iSeqSize;
	vecSeq.resize(iSeqSize);
	vecNGF.resize(iSeqSize);
	fill(vecNGF.begin(), vecNGF.end(), -1);

	for (int iCntSeqIdx = 0; iCntSeqIdx < iSeqSize; ++iCntSeqIdx)
	{
		cin >> vecSeq[iCntSeqIdx];
		++umapFreq[vecSeq[iCntSeqIdx]];
	}

	--iSeqSize;

	for (int iCntSeqIdx = 0; iCntSeqIdx < iSeqSize; ++iCntSeqIdx)
	{
		stkSeqIdxBuff.push(iCntSeqIdx);

		while (!stkSeqIdxBuff.empty() && umapFreq[vecSeq[stkSeqIdxBuff.top()]] < umapFreq[vecSeq[iCntSeqIdx + 1]])
		{
			vecNGF[stkSeqIdxBuff.top()] = vecSeq[iCntSeqIdx + 1];
			stkSeqIdxBuff.pop();
		}
	}

	for (const int& iNumNGF : vecNGF)
		cout << iNumNGF << ' ';

	return 0;
}