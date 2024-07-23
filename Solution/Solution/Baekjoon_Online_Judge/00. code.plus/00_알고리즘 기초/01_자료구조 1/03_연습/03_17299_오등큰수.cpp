#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumN;
	vector<int> vecBuff;
	unordered_map<int, int> mapFreq;
	stack<int> stkBuff;

	cin >> iNumN;
	vecBuff.resize(iNumN);

	for (int iCntIdx = 0; iCntIdx < iNumN; iCntIdx++)
	{
		cin >> vecBuff[iCntIdx];
		mapFreq[vecBuff[iCntIdx]] += 1;
	}

	for (int iCntIdx = 0; iCntIdx < iNumN; iCntIdx++)
	{
		if (stkBuff.empty())
			stkBuff.push(iCntIdx);
		else
		{
			while (mapFreq[vecBuff[stkBuff.top()]] < mapFreq[vecBuff[iCntIdx]])
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