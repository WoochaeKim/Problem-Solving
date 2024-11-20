#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int DIVISOR{ 1000000000 };
	int iSumTarget{}, iNumTerms{};
	cin >> iSumTarget >> iNumTerms;

	vector<vector<int>> vecTabul(iNumTerms + 1, vector<int>(iSumTarget + 1, 1));

	for (int iCntTerms{ 2 }; iCntTerms <= iNumTerms; ++iCntTerms)
	{
		for (int iCntSumTgt{ 1 }; iCntSumTgt <= iSumTarget; ++iCntSumTgt)
		{
			vecTabul[iCntTerms][iCntSumTgt] =
				(vecTabul[iCntTerms - 1][iCntSumTgt] % DIVISOR +
				vecTabul[iCntTerms][iCntSumTgt - 1] % DIVISOR) % DIVISOR;
		}
	}

	cout << vecTabul[iNumTerms][iSumTarget];

	return 0;
}