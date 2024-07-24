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

	int iCntCol = iCol;
	for (const auto& iElem : vecMatrix)
	{
		if (0 == iCntCol)
		{
			iCntCol = iCol
		}
		cout << iElem;
	}

	return 0;
}