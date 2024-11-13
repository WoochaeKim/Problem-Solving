#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSideSize{}, iMaxWeight{};
	cin >> iSideSize;

	vector<vector<int>> vecTabul(iSideSize + 1, vector<int>(iSideSize + 1));

	for (int iCntRow{ 1 }; iCntRow <= iSideSize; ++iCntRow)
	{
		for (int iCntCol{ 1 }; iCntCol <= iCntRow; ++iCntCol)
		{
			cin >> vecTabul[iCntRow][iCntCol];

			vecTabul[iCntRow][iCntCol] += max(vecTabul[iCntRow - 1][iCntCol - 1], vecTabul[iCntRow - 1][iCntCol]);

			if (iMaxWeight < vecTabul[iCntRow][iCntCol])
				iMaxWeight = vecTabul[iCntRow][iCntCol];
		}
	}

	cout << iMaxWeight;

	return 0;
}