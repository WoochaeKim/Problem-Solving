#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iBaseA{}, iBaseB{}, iMaxEXP{}, iNumInput{}, iSumDecimal{};
	stack<int> stkConvBuff{};
	
	cin >> iBaseA >> iBaseB >> iMaxEXP;

	while (iMaxEXP--)
	{
		cin >> iNumInput;
		iSumDecimal += iNumInput * static_cast<int>(pow(iBaseA, iMaxEXP));
	}

	while (iSumDecimal)
	{
		stkConvBuff.push(iSumDecimal % iBaseB);
		iSumDecimal /= iBaseB;
	}

	while (!stkConvBuff.empty())
	{
		cout << stkConvBuff.top() << ' ';
		stkConvBuff.pop();
	}

	return 0;
}