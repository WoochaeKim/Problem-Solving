#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	enum TYPE_POSITION { NONE, UP, DOWN, END };
	int iTestCase{}, iNumCol{}, iNumRow{ 2 }, iPreColIdx{};
	cin >> iTestCase;

	vector<vector<int>> vecScoreBuff{};
	vector<vector<int>> vecTabul{};

	while (iTestCase--)
	{
		cin >> iNumCol;

		vecScoreBuff.resize(iNumRow + 1, vector<int>(iNumCol + 1));
		vecTabul.resize(iNumCol + 1, vector<int>(TYPE_POSITION::END));

		for (int iCntRow{ 1 }; iCntRow <= iNumRow; ++iCntRow)
		{
			for (int iCntCol{ 1 }; iCntCol <= iNumCol; ++iCntCol)
				cin >> vecScoreBuff[iCntRow][iCntCol];
		}
		vecTabul[1][UP] = vecScoreBuff[1][1];
		vecTabul[1][DOWN] = vecScoreBuff[2][1];

		for (int iCntCol{ 2 }; iCntCol <= iNumCol; ++iCntCol)
		{
			iPreColIdx = iCntCol - 1;

			vecTabul[iCntCol][NONE] = max(max(vecTabul[iPreColIdx][NONE],
				vecTabul[iPreColIdx][UP]), vecTabul[iPreColIdx][DOWN]);

			vecTabul[iCntCol][UP] = max(vecTabul[iPreColIdx][NONE], vecTabul[iPreColIdx][DOWN])
				+ vecScoreBuff[UP][iCntCol];

			vecTabul[iCntCol][DOWN] = max(vecTabul[iPreColIdx][NONE], vecTabul[iPreColIdx][UP])
				+ vecScoreBuff[DOWN][iCntCol];
		}

		cout << max(max(vecTabul[iNumCol][NONE], vecTabul[iNumCol][UP]), vecTabul[iNumCol][DOWN]) << '\n';
		
		vecScoreBuff.clear();
		vecTabul.clear();
	}

	return 0;
}