#include <iostream>
#include <limits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iNumInput{};
	int iMaxNum{ numeric_limits<int>::min() }, iMinNum{ numeric_limits<int>::max() };
	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iNumInput;
		if (iMaxNum < iNumInput)
			iMaxNum = iNumInput;

		if (iMinNum > iNumInput)
			iMinNum = iNumInput;
	}

	cout << iMinNum << ' ' << iMaxNum;

	return 0;
}