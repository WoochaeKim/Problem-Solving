#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumPeople{}, iUnitBundle_T{}, iUnitBundle_P, iSumBundle_T{};
	cin >> iNumPeople;

	array<int, 6> arrReqQty_T{};
	for (int& iReqQty_T : arrReqQty_T)
		cin >> iReqQty_T;

	cin >> iUnitBundle_T >> iUnitBundle_P;

	for (int& iReqQty_T : arrReqQty_T)
	{
		iSumBundle_T += iReqQty_T / iUnitBundle_T;

		if (iReqQty_T % iUnitBundle_T)
			++iSumBundle_T;
	}

	cout << iSumBundle_T << '\n' << iNumPeople / iUnitBundle_P << ' ' << iNumPeople % iUnitBundle_P;

	return 0;
}