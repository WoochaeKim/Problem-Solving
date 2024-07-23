#include <iostream>
#include <array>

#define LIMIT_IDX 30
#define TARGET_NUM 2

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInput{};
	int iCntNonTarget = LIMIT_IDX - TARGET_NUM;
	array<bool, LIMIT_IDX> arrChkList{};

	while (iCntNonTarget--)
	{
		cin >> iInput;
		arrChkList[iInput - 1] = true;
	}

	for (int iChkIdx = 0; iChkIdx < LIMIT_IDX; iChkIdx++)
	{
		if (false == arrChkList[iChkIdx])
			cout << iChkIdx + 1 << '\n';
	}

	return 0;
}