#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int MIN_IDX{ 3 };
	int iTestCase{}, iSideSize{};
	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iSideSize;

		vector<long long> vecTabul(iSideSize + 1);

		if (MIN_IDX > iSideSize)
			vecTabul.resize(MIN_IDX + 1);

		vecTabul[1] = 1;
		vecTabul[2] = 1;

		for (int iCntIdx{ 3 }; iCntIdx <= iSideSize; ++iCntIdx)
			vecTabul[iCntIdx] = vecTabul[iCntIdx - 2] + vecTabul[iCntIdx - 3];

		cout << vecTabul[iSideSize] << '\n';
	}

	return 0;
}