#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputX, iInputY;

	cin >> iInputX;
	cin >> iInputY;

	if (0 != iInputX && 0 != iInputY)
	{
		if (0 < iInputX && 0 < iInputY)
			cout << 1;
		else if (0 > iInputX && 0 < iInputY)
			cout << 2;
		else if (0 > iInputX && 0 > iInputY)
			cout << 3;
		else
			cout << 4;
	}
	return 0;
}