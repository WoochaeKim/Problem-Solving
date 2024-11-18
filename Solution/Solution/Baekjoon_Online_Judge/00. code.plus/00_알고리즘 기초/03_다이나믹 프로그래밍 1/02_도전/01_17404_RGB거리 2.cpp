#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	enum TYPE_COLOR { RED, GREEN, BLUE, END };

	int iNumHouse{};
	cin >> iNumHouse;

	vector<vector<int>> vecCost(iNumHouse + 1, vector<int>(TYPE_COLOR::END));
	for (int iCntHouse{ 1 }; iCntHouse <= iNumHouse; ++iCntHouse)
	{
		for (int iCntColor{}; iCntColor < TYPE_COLOR::END; ++iCntColor)
			cin >> vecCost[iCntHouse][iCntColor];
	}

	int iPrevHouse{}, iMinCost{ INT_MAX };
	vector<vector<int>> vecTabul(iNumHouse + 1, vector<int>(TYPE_COLOR::END));

	for (int iFstColor{}; iFstColor < TYPE_COLOR::END; ++iFstColor)
	{
		for (int iFixColor{}; iFixColor < TYPE_COLOR::END; ++iFixColor)
		{
			vecTabul[1][iFixColor] =
				(iFstColor == iFixColor ? vecCost[1][iFixColor] : INT_MAX >> 1);
		}

		for (int iCurHouse{ 2 }; iCurHouse <= iNumHouse; ++iCurHouse)
		{
			iPrevHouse = iCurHouse - 1;

			vecTabul[iCurHouse][RED] =
				min(vecTabul[iPrevHouse][GREEN], vecTabul[iPrevHouse][BLUE]) + vecCost[iCurHouse][RED];

			vecTabul[iCurHouse][GREEN] =
				min(vecTabul[iPrevHouse][RED], vecTabul[iPrevHouse][BLUE]) + vecCost[iCurHouse][GREEN];

			vecTabul[iCurHouse][BLUE] =
				min(vecTabul[iPrevHouse][RED], vecTabul[iPrevHouse][GREEN]) + vecCost[iCurHouse][BLUE];
		}

		for (int iFixColor{}; iFixColor < TYPE_COLOR::END; ++iFixColor)
		{
			if (iFstColor != iFixColor && iMinCost > vecTabul[iNumHouse][iFixColor])
				iMinCost = vecTabul[iNumHouse][iFixColor];
		}
	}

	cout << iMinCost;

	return 0;
}