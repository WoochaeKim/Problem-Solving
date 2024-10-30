#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

void TopAndPop(stack<double>& _stkBuff, double& _fOperand)
{
	if (!_stkBuff.empty())
	{
		_fOperand = _stkBuff.top();
		_stkBuff.pop();
	}
}

void ComputeStack(stack<double>& _stkBuff, const char& _chOperator)
{
	double fLHS{}, fRHS{};
	TopAndPop(_stkBuff, fRHS);
	TopAndPop(_stkBuff, fLHS);

	switch (_chOperator)
	{
	case '+':
		_stkBuff.push(fLHS + fRHS);
		break;
	case '-':
		_stkBuff.push(fLHS - fRHS);
		break;
	case '*':
		_stkBuff.push(fLHS * fRHS);
		break;
	case '/':
		_stkBuff.push(fLHS / fRHS);
		break;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumOperand{};
	
	string strInput{};
	stack<double> stkBuff{};
	vector<int> vecBuff{};

	cin >> iNumOperand >> strInput;

	vecBuff.resize(iNumOperand);

	for (int iCntIdx = 0; iCntIdx < iNumOperand; ++iCntIdx)
		cin >> vecBuff[iCntIdx];

	for (const char& ch : strInput)
	{
		if ('+' == ch || '-' == ch || '*' == ch || '/' == ch)
			ComputeStack(stkBuff, ch);
		else
			stkBuff.push(static_cast<double>(vecBuff[static_cast<int>(ch - 'A')]));
	}
	cout.precision(2);
	cout << fixed << stkBuff.top();

	return 0;
}