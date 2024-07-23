#include <iostream>
#include <stack>
#include <string>

using namespace std;

void PrintBuff(stack<char>& _stkBuff)
{
	while (false == _stkBuff.empty())
	{
		cout << _stkBuff.top();
		_stkBuff.pop();
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool bIsTag{};
	string strInput;
	stack<char> stkBuff;

	getline(cin, strInput);

	for (char ch : strInput)
	{
		switch (ch)
		{
		case '<':
			PrintBuff(stkBuff);
			bIsTag = true;
			break;
		case '>':
			bIsTag = false;
			cout << ch;
			continue;
		}

		if (bIsTag)
			cout << ch;
		else
		{
			if (' ' == ch)
			{
				PrintBuff(stkBuff);
				cout << ch;
			}
			else
				stkBuff.push(ch);
		}
	}

	PrintBuff(stkBuff);
	return 0;
}