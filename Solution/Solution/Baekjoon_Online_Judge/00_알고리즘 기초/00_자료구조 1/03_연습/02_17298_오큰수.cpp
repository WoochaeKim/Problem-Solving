#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumT;
	vector<int> vecBuff;
	stack<int> stkBuff;

	cin >> iNumT;
	vecBuff.resize(iNumT);

	for (int iCntIdx = 0; iCntIdx < iNumT; iCntIdx++)
	{
		cin >> vecBuff[iCntIdx];

		if (stkBuff.empty())
			stkBuff.push(iCntIdx);
		else
		{
			while (vecBuff[stkBuff.top()] < vecBuff[iCntIdx])
			{
				vecBuff[stkBuff.top()] = vecBuff[iCntIdx];
				stkBuff.pop();

				if (stkBuff.empty())
					break;
			}
			stkBuff.push(iCntIdx);
		}
	}

	while (false == stkBuff.empty())
	{
		vecBuff[stkBuff.top()] = -1;
		stkBuff.pop();
	}

	for (int iElem : vecBuff)
		cout << iElem << ' ';

	return 0;
}