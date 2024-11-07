#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumRow{}, iNumCol{}, iNumIput{}, iMaxLoop{2};
	cin >> iNumRow >> iNumCol;

	vector<vector<int>> vecMatrix(iNumRow, vector<int>(iNumCol));

	while (iMaxLoop--)
	{
		for (vector<int>& vecCntRow : vecMatrix)
		{
			for (int& iElem : vecCntRow)
			{
				cin >> iNumIput;
				iElem += iNumIput;
			}
		}
	}

	for (vector<int>& vecCntRow : vecMatrix)
	{
		for (int& iElem : vecCntRow)
			cout << iElem << ' ';

		cout << '\n';
	}

	return 0;
}