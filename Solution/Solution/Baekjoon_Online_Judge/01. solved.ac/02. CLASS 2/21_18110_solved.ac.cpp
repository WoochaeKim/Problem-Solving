#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void TrimOpinion(vector<int>& _vecDiffBuff, int _iCntIdx, int _iEndIdx, int _iNumTrim)
{
	int iStep{ _iEndIdx > _iCntIdx ? 1 : -1 };

	for (_iCntIdx; _iCntIdx != _iEndIdx; _iCntIdx += iStep)
	{
		if (_iNumTrim <= _vecDiffBuff[_iCntIdx]) 
		{
			_vecDiffBuff[_iCntIdx] -= _iNumTrim;
			_iNumTrim = 0;
			break;
		}
		else 
		{
			_iNumTrim -= _vecDiffBuff[_iCntIdx];
			_vecDiffBuff[_iCntIdx] = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int BUFF_SIZE{ 30 };
	int iInputSize{};
	double dAvgDiff{};
	cin >> iInputSize;

	if (iInputSize)
	{
		int iInputDifficulty{}, iSumDiff{}, iSumOpin{};
		int iNumTrim{ static_cast<int>(round(static_cast<double>(iInputSize) * 0.15)) };

		vector<int> vecDiffBuff(BUFF_SIZE + 1);

		while (iInputSize--)
		{
			cin >> iInputDifficulty;
			++vecDiffBuff[iInputDifficulty];
		}

		TrimOpinion(vecDiffBuff, 0, BUFF_SIZE + 1, iNumTrim);
		TrimOpinion(vecDiffBuff, BUFF_SIZE, -1, iNumTrim);

		for (int iCntIdx{}; iCntIdx <= BUFF_SIZE; ++iCntIdx)
		{
			if (0 < vecDiffBuff[iCntIdx])
			{
				iSumOpin += vecDiffBuff[iCntIdx];
				iSumDiff += iCntIdx * vecDiffBuff[iCntIdx];
			}
		}

		dAvgDiff = static_cast<double>(iSumDiff) / static_cast<double>(iSumOpin);
	}

	cout << round(dAvgDiff);

	return 0;
}