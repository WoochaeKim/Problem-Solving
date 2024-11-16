#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumPeople{}, iOffset{};
	cin >> iNumPeople >> iOffset;

	queue<int> queSeq{};

	for (int iCntNum{ 1 }; iCntNum <= iNumPeople; ++iCntNum)
		queSeq.push(iCntNum);

	cout << '<';

	while (1 < queSeq.size())
	{
		int iCntLoop{ iOffset };

		while (--iCntLoop)
		{
			queSeq.push(queSeq.front());
			queSeq.pop();
		}

		cout << queSeq.front() << ", ";
		queSeq.pop();
	}

	cout << queSeq.front() << '>';

	return 0;
}