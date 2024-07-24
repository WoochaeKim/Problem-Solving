#include <iostream>
#include <cmath>

#define FLOOR_OFFSET 100

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase, iFloor, iDummy, iGuests;

	cin >> iTestCase;
	while (iTestCase--)
	{
		cin >> iFloor >> iDummy >> iGuests;

		int iTargetFloor = ((0 == iGuests % iFloor) ? iFloor : iGuests % iFloor);
		int iTargetRoom = static_cast<int>(ceil(static_cast<float>(iGuests) / static_cast<float>(iFloor)));
		cout << iTargetFloor * FLOOR_OFFSET + iTargetRoom << '\n';
	}

	return 0;
}