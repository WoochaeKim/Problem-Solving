#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool bIsFailed{};
	int iSeqSize{}, iNumInput{}, iNumLastInput{};
	stack<int> stkBuff{};
	string strCmdSeq{};
	cin >> iSeqSize;

	while (iSeqSize--)
	{
		cin >> iNumInput;

		if (iNumLastInput < iNumInput)
		{
			while (iNumInput != iNumLastInput)
			{
				stkBuff.push(++iNumLastInput);
				strCmdSeq += '+';
			}
			if (!stkBuff.empty())
			{
				stkBuff.pop();
				strCmdSeq += '-';
			}
		}
		else
		{
			if (!stkBuff.empty())
			{
				if (stkBuff.top() == iNumInput)
				{
					stkBuff.pop();
					strCmdSeq += '-';
				}
				else
				{
					bIsFailed = true;
					break;
				}
			}
		}

	}

	if (bIsFailed)
		cout << "NO";
	else
		for (const char& ch : strCmdSeq)
			cout << ch << '\n';

	return 0;
}