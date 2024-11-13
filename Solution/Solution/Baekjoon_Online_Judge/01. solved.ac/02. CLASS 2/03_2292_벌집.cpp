#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iRoomNum{};
	cin >> iRoomNum;

	const int OFFSET{ 6 };
	int iLower{ 1 }, iUpper{ 1 }, path{ 1 }, iCurDiff{};

	while (true)
	{
		if (iLower <= iRoomNum && iUpper >= iRoomNum)
			break;
		else
		{
			iCurDiff += OFFSET;
			iLower = iUpper + 1;
			iUpper += iCurDiff;
			++path;
		}
	}

	cout << path;

	return 0;
}