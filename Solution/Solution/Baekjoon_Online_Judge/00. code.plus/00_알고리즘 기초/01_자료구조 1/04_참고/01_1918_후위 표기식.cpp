#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;
enum TYPE_OP { OP_OpenPar, OP_AddSub, OP_MulDiv };

void TopAndPop(stack<char>& _stkBuff)
{
	cout << _stkBuff.top();
	_stkBuff.pop();
}

void ComputePriority(stack<char>& _stkBuff, const char& _chOperator)
{
	static unordered_map<char, TYPE_OP> umapPriority{ {'(', OP_OpenPar}, {'+', OP_AddSub}, {'-', OP_AddSub}, {'*', OP_MulDiv}, {'/', OP_MulDiv} };

	if ('(' == _chOperator)
		_stkBuff.push('(');
	else if (')' == _chOperator)
	{
		while ('(' != _stkBuff.top())
			TopAndPop(_stkBuff);

		_stkBuff.pop();
	}
	else
	{
		while (!_stkBuff.empty() && umapPriority[_stkBuff.top()] >= umapPriority[_chOperator])
			TopAndPop(_stkBuff);

		_stkBuff.push(_chOperator);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	stack<char> stkBuff{};
	string strInput{};
	cin >> strInput;
	
	for (const char& ch : strInput)
	{
		if ('A' <= ch && 'Z' >= ch)
			cout << ch;
		else
			ComputePriority(stkBuff, ch);
	}

	while (!stkBuff.empty())
		TopAndPop(stkBuff);

	return 0;
}