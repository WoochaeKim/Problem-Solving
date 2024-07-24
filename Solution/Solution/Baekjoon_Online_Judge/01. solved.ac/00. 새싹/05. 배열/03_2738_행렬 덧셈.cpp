#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iRow, iCol, iInput, iNumMat{2};
	vector<int> vecMatrix{};

	cin >> iRow >> iCol;
	vecMatrix.resize(iRow * iCol, 0);
	
	while (iNumMat--)
	{
		for (auto& iElem : vecMatrix)
		{
			cin >> iInput;
			iElem += iInput;
		}
	}

	for (int iCntRow = 0; iCntRow < iRow; iCntRow++)
	{
		for (int iCntCol = 0; iCntCol < iCol; iCntCol++)
		{
			cout << vecMatrix[iCntRow * iCol + iCntCol] << ' ';
		}
		cout << '\n';
	}

	return 0;
}