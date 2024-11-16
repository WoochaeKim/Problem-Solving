#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int LOWER_BOUND{ 5 };
	int iOrderWeight{};
	cin >> iOrderWeight;

	vector<int> vecTabul(iOrderWeight + 1, INT_MAX);
	
	if (5 > iOrderWeight)
		vecTabul.resize(LOWER_BOUND + 1, INT_MAX);
	
	vecTabul[3] = 1, vecTabul[5] = 1;

	for (int iCntWeight{ 6 }; iCntWeight <= iOrderWeight; ++iCntWeight)
	{
		vecTabul[iCntWeight] = min(vecTabul[iCntWeight - 3], vecTabul[iCntWeight - 5]);

		if (INT_MAX != vecTabul[iCntWeight])
			++vecTabul[iCntWeight];
	}

	if (INT_MAX == vecTabul[iOrderWeight])
		cout << -1;
	else
		cout << vecTabul[iOrderWeight];

	return 0;
}