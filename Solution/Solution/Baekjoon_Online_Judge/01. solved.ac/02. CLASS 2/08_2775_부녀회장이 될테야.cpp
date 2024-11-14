#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int MAX_FLOOR{14}, MAX_ROOM{14};
	int iTestCase{}, iFloor{}, iRoomNum{};
	cin >> iTestCase;

	vector<vector<int>> vecTabul(MAX_FLOOR + 1, vector<int>(MAX_ROOM + 1));
	
	for (int iCntRoom{}; iCntRoom <= MAX_ROOM; ++iCntRoom)
		vecTabul[0][iCntRoom] = iCntRoom;
	
	for (int iCntFloor{ 1 }; iCntFloor <= MAX_FLOOR; ++iCntFloor)
	{
		for (int iCntRoom{ 0 }; iCntRoom <= MAX_ROOM; ++iCntRoom)
		{
			for (int iCntPreRoom{ 0 }; iCntPreRoom <= iCntRoom; ++iCntPreRoom)
				vecTabul[iCntFloor][iCntRoom] += vecTabul[iCntFloor - 1][iCntPreRoom];
		}
	}

	while (iTestCase--)
	{
		cin >> iFloor >> iRoomNum;
		cout << vecTabul[iFloor][iRoomNum] << '\n';
	}

	return 0;
}