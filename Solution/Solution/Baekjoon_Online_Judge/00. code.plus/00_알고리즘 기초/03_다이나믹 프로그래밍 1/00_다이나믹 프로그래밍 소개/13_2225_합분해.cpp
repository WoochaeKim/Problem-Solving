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

	vector<vector<int>> vecTabul(iNumTerms + 1, vector<int>(iSumTarget + 1));
	fill(vecTabul[1].begin(), vecTabul[1].end(), 1);

	for (int iCntTerms{ 2 }; iCntTerms <= iNumTerms; ++iCntTerms)
	{
		for (int iCntSumTgt{}; iCntSumTgt <= iSumTarget; ++iCntSumTgt)
		{
			for (int iCntSubVal{}; iCntSubVal <= iCntSumTgt; ++iCntSubVal)
			{
				vecTabul[iCntTerms][iCntSumTgt] = 
					(vecTabul[iCntTerms][iCntSumTgt] % DIVISOR + 
						vecTabul[iCntTerms - 1][iCntSumTgt - iCntSubVal] % DIVISOR) % DIVISOR;
			}
		}
	}

	cout << vecTabul[iNumTerms][iSumTarget];

	return 0;
}