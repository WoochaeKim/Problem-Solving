#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iNumTerm{};
	cin >> iNumInput;

	vector<int> vecTabul(iNumInput + 1);

	for (int iCntIdx{ 1 }; iCntIdx <= iNumInput; ++iCntIdx)
	{
		vecTabul[iCntIdx] = iCntIdx;
		for (int iCntSqr{ 1 }; iCntSqr * iCntSqr <= iCntIdx; ++iCntSqr)
		{
			iNumTerm = vecTabul[iCntIdx - iCntSqr * iCntSqr] + 1;

			if (vecTabul[iCntIdx] > iNumTerm)
				vecTabul[iCntIdx] = iNumTerm;
		}
	}

	cout << vecTabul.back();

	return 0;
}