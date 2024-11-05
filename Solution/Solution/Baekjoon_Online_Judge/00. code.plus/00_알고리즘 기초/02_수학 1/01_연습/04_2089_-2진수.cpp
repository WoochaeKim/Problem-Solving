#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int NEG_BIN{ -2 };
	int iQuot{}, iRem{};
	stack<int> stkNegBinBuff{};

	cin >> iQuot;

	if (0 == iQuot)
		cout << iQuot;
	else
	{
		while (iQuot)
		{
			iRem = iQuot % NEG_BIN;
			iQuot = iQuot / NEG_BIN;

			if (0 > iRem)
				iQuot += iRem = 1;

			stkNegBinBuff.push(iRem);
		}

		while (!stkNegBinBuff.empty())
		{
			cout << stkNegBinBuff.top();
			stkNegBinBuff.pop();
		}
	}

	return 0;
}