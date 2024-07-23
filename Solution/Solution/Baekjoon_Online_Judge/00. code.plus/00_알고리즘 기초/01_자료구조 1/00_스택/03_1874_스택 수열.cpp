#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumT, iNumInput, iPivot = 0;
	bool bIsSeq = true;
	stack<int> stkBuff;
	vector<char> vecOper;

	cin >> iNumT;

	while (iNumT--)
	{
		cin >> iNumInput;

		while (iPivot < iNumInput)
		{
			stkBuff.push(++iPivot);
			vecOper.push_back('+');
		}

		if (false == stkBuff.empty())
		{
			if (stkBuff.top() == iNumInput)
			{
				stkBuff.pop();
				vecOper.push_back('-');
			}
			else
			{
				bIsSeq = false;
				break;
			}
		}
	}

	if (bIsSeq)
		for (char ch : vecOper)
			cout << ch << '\n';
	else
		cout << "NO" << '\n';

	return 0;
}