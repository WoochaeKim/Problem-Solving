#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iBase{}, iNumOutput{};
	stack<int> stkBuff{};

	cin >> iNumInput >> iBase;

	while (iNumInput)
	{
		stkBuff.push(iNumInput % iBase);
		iNumInput /= iBase;
	}

	while (!stkBuff.empty())
	{
		iNumOutput = stkBuff.top();
		stkBuff.pop();

		if (iNumOutput > 9)
			cout << static_cast<char>(iNumOutput - 10 + 'A');
		else
			cout << iNumOutput;
	}

	return 0;
}