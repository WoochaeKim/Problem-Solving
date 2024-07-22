#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int iStrSize, iNumBar{};
	string strInput;
	stack<int> stkBuff;

	cin >> strInput;

	iStrSize = static_cast<int>(strInput.size());

	for (int iCntIdx = 0; iCntIdx < iStrSize; iCntIdx++)
	{
		switch (strInput[iCntIdx])
		{
		case '(':
			stkBuff.push(iCntIdx);
			break;

		case ')':
			if (1 >= iCntIdx - stkBuff.top()) // 레이저.
			{
				stkBuff.pop(); // 순수 막대기만 남음.
				iNumBar += static_cast<int>(stkBuff.size()); // 레이저로 인해 짤려진 막대기 개수.
			}
			else
			{
				stkBuff.pop();
				iNumBar += 1;
			}
			break;
		}
	}

	cout << iNumBar << '\n';

	return 0;
}