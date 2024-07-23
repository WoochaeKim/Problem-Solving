#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumN, iNumK, iNum = 0;
	queue<int> queBuff;
	vector<int> vecBuff;

	cin >> iNumN >> iNumK;

	while (iNumN--)
		queBuff.push(++iNum);

	while (false == queBuff.empty())
	{
		iNum = iNumK;

		while (--iNum)
		{
			queBuff.push(queBuff.front());
			queBuff.pop();
		}

		vecBuff.push_back(queBuff.front());
		queBuff.pop();
	}

	if (false == vecBuff.empty())
	{
		iNum = vecBuff.back();
		vecBuff.pop_back();
	}

	cout << "<";
	for (int iItem : vecBuff)
		cout << iItem << ", ";
	cout << iNum << ">\n";

	return 0;
}