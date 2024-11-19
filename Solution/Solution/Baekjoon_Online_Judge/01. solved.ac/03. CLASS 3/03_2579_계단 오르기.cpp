#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int MiN_IDX{ 4 };
	int iNumStair{}, iScore;
	cin >> iNumStair;

	vector<int> vecTabul(iNumStair + 1);
	vector<int> vecScore{};
	vecScore.reserve(iNumStair + 1);
	vecScore.emplace_back(0);

	for (int iCntScore{ 1 }; iCntScore <= iNumStair; ++iCntScore)
	{
		cin >> iScore;
		vecScore.emplace_back(iScore);
	}

	if (MiN_IDX > iNumStair)
	{
		vecTabul.resize(MiN_IDX + 1);
		vecScore.resize(MiN_IDX + 1);
	}

	vecTabul[1] = vecScore[1];
	vecTabul[2] = vecTabul[1] + vecScore[2];
	vecTabul[3] = max(vecTabul[1], vecTabul[0] + vecScore[2]) + vecScore[3];

	for (int iCntStair{ 4 }; iCntStair <= iNumStair; ++iCntStair)
	{
		vecTabul[iCntStair] =
			max(vecTabul[iCntStair - 2], vecTabul[iCntStair - 3] + vecScore[iCntStair - 1]) 
			+ vecScore[iCntStair];
	}

	cout << vecTabul[iNumStair];

	return 0;
}