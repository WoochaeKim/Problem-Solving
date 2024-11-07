#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int NUM_STUDENT{ 31 };
	int iNumCheck{ 28 }, iStudentID{};

	array<bool, NUM_STUDENT> arrIsCheck{};

	while (iNumCheck--)
	{
		cin >> iStudentID;
		arrIsCheck[iStudentID] = true;
	}

	for (int iCntID{ 1 }; iCntID < NUM_STUDENT; ++iCntID)
	{
		if (!arrIsCheck[iCntID])
			cout << iCntID << '\n';
	}

	return 0;
}