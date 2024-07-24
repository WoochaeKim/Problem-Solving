#include <iostream>

#define LIMIT_IDX 9

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInput, iMax{}, iMaxIdx;

	for (int iIdx = 1; iIdx <= LIMIT_IDX; iIdx++)
	{
		cin >> iInput;

		if (iMax < iInput)
		{
			iMax = iInput;
			iMaxIdx = iIdx;
		}
	}

	cout << iMax << '\n' << iMaxIdx;

	return 0;
}