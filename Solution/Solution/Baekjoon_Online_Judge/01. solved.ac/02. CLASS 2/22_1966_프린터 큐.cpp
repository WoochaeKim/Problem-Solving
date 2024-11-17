#include <iostream>
#include <queue>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int MAX_RANK{ 10 };
	int iTestCase{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		int iNumPaper{}, iTargetIdx{}, iPaperRank{}, iNumPrint{};

		array<int, MAX_RANK> arrCntRank{};
		queue<pair<int, bool>> quePaperBuff{};

		cin >> iNumPaper >> iTargetIdx;

		for (int iCntIdx{}; iCntIdx < iNumPaper; ++iCntIdx)
		{
			cin >> iPaperRank;

			if (iTargetIdx == iCntIdx)
				quePaperBuff.emplace(iPaperRank, true);
			else
				quePaperBuff.emplace(iPaperRank, false);

			++arrCntRank[iPaperRank];
		}

		for (int iCntRank{ MAX_RANK-1 }; iCntRank > 0;)
		{
			if (0 == arrCntRank[iCntRank])
			{
				--iCntRank;
				continue;
			}

			if (!quePaperBuff.empty())
			{
				if (iCntRank == quePaperBuff.front().first)
				{
					if (quePaperBuff.front().second)
						break;

					quePaperBuff.pop();
					--arrCntRank[iCntRank];
					++iNumPrint;
				}
				else
				{
					quePaperBuff.push(quePaperBuff.front());
					quePaperBuff.pop();
				}
			}
		}

		cout << ++iNumPrint << '\n';
	}

	return 0;
}