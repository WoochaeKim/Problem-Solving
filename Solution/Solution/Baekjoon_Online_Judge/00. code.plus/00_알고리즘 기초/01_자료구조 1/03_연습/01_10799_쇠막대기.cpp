#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iStrSize{}, iNumPiece{};
	string strInput{};
	stack<int> stkBuff{};

	cin >> strInput;

	iStrSize = static_cast<int>(strInput.size());

	for (int iCntIdx = 0; iCntIdx < iStrSize; iCntIdx++)
	{
		if ('(' == strInput[iCntIdx])
			stkBuff.push(iCntIdx);
		else // ')' == strInput[iCntIdx]
		{
			if (!stkBuff.empty())
			{
				if (1 == iCntIdx - stkBuff.top()) // ������
				{
					stkBuff.pop();
					iNumPiece += static_cast<int>(stkBuff.size());
				}
				else // �踷���
				{
					stkBuff.pop();
					iNumPiece += 1;
				}
			}
		}
	}

	cout << iNumPiece;

	return 0;
}