#include <iostream>
#include <vector>

using namespace std;

vector<int> g_vecPriceCardPack{};
vector<int> g_vecMemo{};

int MinCost(int _iNumCardPack)
{
	if (0 < g_vecMemo[_iNumCardPack])
		return g_vecMemo[_iNumCardPack];

	g_vecMemo[_iNumCardPack] = g_vecPriceCardPack[_iNumCardPack];

	int iCntMax{ _iNumCardPack >> 1 };
	for (int iCntIdx{ 1 }; iCntIdx <= iCntMax; ++iCntIdx)
		g_vecMemo[_iNumCardPack] = min(g_vecMemo[_iNumCardPack], g_vecMemo[iCntIdx] + MinCost(_iNumCardPack - iCntIdx));

	return g_vecMemo[_iNumCardPack];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumBuyCard{}, iPriceCardPack{};
	cin >> iNumBuyCard;

	g_vecPriceCardPack.reserve(10001);
	g_vecPriceCardPack.emplace_back(0);
	g_vecMemo.resize(iNumBuyCard + 1);

	while (iNumBuyCard--)
	{
		cin >> iPriceCardPack;
		g_vecPriceCardPack.emplace_back(iPriceCardPack);
	}
	g_vecMemo[0] = 0;
	g_vecMemo[1] = g_vecPriceCardPack[1];

	cout << MinCost(static_cast<int>(g_vecMemo.size()) - 1);

	return 0;
}