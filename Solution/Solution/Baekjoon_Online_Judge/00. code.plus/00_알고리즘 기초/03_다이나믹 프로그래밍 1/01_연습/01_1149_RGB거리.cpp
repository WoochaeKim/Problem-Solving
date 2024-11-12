#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	enum COLOR_TYPE { RED, GREEN, BLUE, END };
	array<int, COLOR_TYPE::END> arrCost{};
	int iNumHouse{};
	cin >> iNumHouse;

	vector<vector<int>> vecTabul(iNumHouse + 1, vector<int>(COLOR_TYPE::END));
	for (int& iMinCost : vecTabul[1])
		cin >> iMinCost;

	for (int iCntHouse{ 2 }; iCntHouse <= iNumHouse; ++iCntHouse)
	{
		cin >> arrCost[RED] >> arrCost[GREEN] >> arrCost[BLUE];

		vecTabul[iCntHouse][RED] =
			min(vecTabul[iCntHouse - 1][GREEN], vecTabul[iCntHouse - 1][BLUE]) + arrCost[RED];

		vecTabul[iCntHouse][GREEN] =
			min(vecTabul[iCntHouse - 1][RED], vecTabul[iCntHouse - 1][BLUE]) + arrCost[GREEN];

		vecTabul[iCntHouse][BLUE] =
			min(vecTabul[iCntHouse - 1][RED], vecTabul[iCntHouse - 1][GREEN]) + arrCost[BLUE];
	}
	
	cout << min(min(vecTabul[iNumHouse][RED], vecTabul[iNumHouse][GREEN]), vecTabul[iNumHouse][BLUE]);

	return 0;
}