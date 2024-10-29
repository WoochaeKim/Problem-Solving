#include <iostream>
#include <string>
#include <stack>

using namespace std;

void PrintStackBuffer(stack<char>& _stkBuff)
{
	while (!_stkBuff.empty())
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
	string strInput{};
	stack<char> stkBuff{};

	getline(cin, strInput);

	for (const char& ch : strInput)
	{
		if ('<' == ch)
		{
			bIsTag = true;
			PrintStackBuffer(stkBuff);
			cout << ch;
		}
		else if ('>' == ch)
		{
			bIsTag = false;
			cout << ch;
		}
		else 
		{
			if (bIsTag)
			{
				cout << ch;
			}
			else
			{
				if (' ' == ch)
				{
					PrintStackBuffer(stkBuff);
					cout << ch;
				}
				else
					stkBuff.push(ch);
			}
		}
	}

	PrintStackBuffer(stkBuff);

	return 0;
}