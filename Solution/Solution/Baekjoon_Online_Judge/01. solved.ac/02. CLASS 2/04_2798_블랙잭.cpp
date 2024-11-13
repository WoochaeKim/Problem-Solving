#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumCard{}, iTargetNum{}, iInputCard{}, iSumCard{}, iMaxSum{};
	cin >> iNumCard >> iTargetNum;

	vector<int> vecCardBuff(iNumCard);

	for (int& iCard : vecCardBuff)
		cin >> iCard;

	int iNumFirstCard{ iNumCard - 2 }, iNumSecondCard{ iNumCard - 1 };
	bool bIsBlackjack{};
	for (int iCntFirst{}; iCntFirst < iNumFirstCard && !bIsBlackjack; ++iCntFirst)
	{
		for (int iCntSecond{ iCntFirst + 1 }; iCntSecond < iNumSecondCard && !bIsBlackjack; ++iCntSecond)
		{
			for (int iCntThird{ iCntSecond + 1 }; iCntThird < iNumCard; ++iCntThird)
			{
				iSumCard = vecCardBuff[iCntFirst] + vecCardBuff[iCntSecond] + vecCardBuff[iCntThird];

				if (iTargetNum >= iSumCard && iMaxSum < iSumCard)
				{
					if (iTargetNum == iSumCard)
					{
						cout << iSumCard;
						bIsBlackjack = true;
						break;
					}

					iMaxSum = iSumCard;
				}
			}
		}
	}

	if (!bIsBlackjack)
		cout << iMaxSum;

	return 0;
}