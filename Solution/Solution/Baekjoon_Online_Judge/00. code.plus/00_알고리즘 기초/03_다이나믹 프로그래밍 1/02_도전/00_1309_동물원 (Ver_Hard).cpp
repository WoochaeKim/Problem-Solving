#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	const int DIVISOR{ 9901 };
	int iCageSize{};
	cin >> iCageSize;

	vector<int> vecTabul(iCageSize + 1);
	vector<int> vecSum(iCageSize + 1);
	
	vecTabul[0] = 1; vecTabul[1] = 2;
	vecSum[0] = 1; vecSum[1] = 3;

	for (int iCntIdx{ 2 }; iCntIdx <= iCageSize; ++iCntIdx)
	{
		vecTabul[iCntIdx] = (vecTabul[iCntIdx - 1] + (2 * vecSum[iCntIdx - 2])) % DIVISOR;
		vecSum[iCntIdx] = (vecSum[iCntIdx - 1] + vecTabul[iCntIdx]) % DIVISOR;
	}

	cout << vecSum[iCageSize];

	return 0;
}