#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumPeople{}, iNumOffset{};
	queue<int> queBuff{};

	cin >> iNumPeople >> iNumOffset;

	for (int iCnt = 1; iCnt <= iNumPeople; ++iCnt)
		queBuff.push(iCnt);

	cout << '<';

	while (1 < queBuff.size())
	{
		for (int iCnt = 1; iCnt <= iNumOffset; ++iCnt)
		{
			if (iNumOffset == iCnt)
				cout << queBuff.front() << ", ";
			else
				queBuff.push(queBuff.front());
			queBuff.pop();
		}

	}

	if (!queBuff.empty())
	{
		cout << queBuff.front();
		queBuff.pop();
	}

	cout << '>';

	return 0;
}