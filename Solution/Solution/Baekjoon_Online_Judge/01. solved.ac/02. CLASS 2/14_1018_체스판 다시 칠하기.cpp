#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int CHESS_SIZE{ 8 };
	int iNumRow{}, iNumCol{};
	cin >> iNumRow >> iNumCol;

	vector<string> vecBoard(iNumRow);

	for (string& strRow : vecBoard)
		cin >> strRow;

	int iMinRePaint{ INT_MAX };

	for (int iCntOriginCol{ CHESS_SIZE }; iCntOriginCol <= iNumCol; ++iCntOriginCol) // 전체 열
	{
		for (int iCntOriginRow{ CHESS_SIZE }; iCntOriginRow <= iNumRow; ++iCntOriginRow) // 전체 행
		{
			int iNumRePaintWB{}, iNumRePaintBW{};

			for (int iCntSubRow{ iCntOriginRow - CHESS_SIZE }; iCntSubRow < iCntOriginRow; ++iCntSubRow)
			{
				for (int iCntSubCol{ iCntOriginCol - CHESS_SIZE }; iCntSubCol < iCntOriginCol; ++iCntSubCol)
				{
					if ((iCntSubRow + iCntSubCol) % 2)
						('W' == vecBoard[iCntSubRow][iCntSubCol]) ? ++iNumRePaintWB : ++iNumRePaintBW;
					else 
						('B' == vecBoard[iCntSubRow][iCntSubCol]) ? ++iNumRePaintWB : ++iNumRePaintBW;
				}
			}

			iMinRePaint = min(iMinRePaint, min(iNumRePaintWB, iNumRePaintBW));
		}
	}

	cout << iMinRePaint << '\n';

	return 0;
}