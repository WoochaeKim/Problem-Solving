#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputSize{}, iInputNum{}, iSum{};
	cin >> iInputSize;

	stack<int> stkLedger{};

	while (iInputSize--)
	{
		cin >> iInputNum;

		if (0 == iInputNum)
		{
			if (!stkLedger.empty())
				stkLedger.pop();
		}
		else
			stkLedger.push(iInputNum);
	}

	while (!stkLedger.empty())
	{
		iSum += stkLedger.top();
		stkLedger.pop();
	}

	cout << iSum;

	return 0;
}