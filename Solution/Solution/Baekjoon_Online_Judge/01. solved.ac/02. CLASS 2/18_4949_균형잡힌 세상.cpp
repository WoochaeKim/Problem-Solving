#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool CloseBracketCheck(stack<char>& _stkBracketBuff, char _chBracket)
{
	if (_stkBracketBuff.empty())
		return false;

	if ((')' == _chBracket && '(' == _stkBracketBuff.top()) ||
		(']' == _chBracket && '[' == _stkBracketBuff.top()))
	{
		_stkBracketBuff.pop();
		return true;
	}

	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput;

	while (true)
	{
		getline(cin, strInput);

		if ("." == strInput)
			break;

		stack<char> stkBracketBuff{};
		bool bIsBalance{true};

		for (const char ch : strInput)
		{
			if ('(' == ch || '[' == ch)
				stkBracketBuff.push(ch);

			if (')' == ch || ']' == ch)
				bIsBalance = CloseBracketCheck(stkBracketBuff, ch);

			if (!bIsBalance)
				break;
		}

		if (!stkBracketBuff.empty())
			bIsBalance = false;

		cout << (bIsBalance ? "yes" : "no") << '\n';
	}

	return 0;
}