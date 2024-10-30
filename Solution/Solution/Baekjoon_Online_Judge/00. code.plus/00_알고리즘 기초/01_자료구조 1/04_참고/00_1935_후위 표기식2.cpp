#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

void TopAndPop(stack<float>& _stkBuff, float& _fOperand)
{
	if (!_stkBuff.empty())
	{
		_fOperand = _stkBuff.top();
		_stkBuff.pop();
	}
}

void ComputeStack(stack<float>& _stkBuff, const char& _chOperator)
{
	float fLHS{}, fRHS{};
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
	stack<float> stkBuff{};
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
			stkBuff.push(static_cast<float>(vecBuff[static_cast<int>(ch - 'A')]));
	}
	cout.precision(2);
	cout << fixed << stkBuff.top();

	return 0;
}