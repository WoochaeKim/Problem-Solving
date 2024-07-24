#include <iostream>
#include <limits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase, iInput;
	int iMax{ numeric_limits<int>::min() };
	int iMin{ numeric_limits<int>::max() };

	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iInput;
		if (iMin > iInput)
			iMin = iInput;

		if (iMax < iInput)
			iMax = iInput;
	}

	cout << iMin << iMax;

	return 0;
}