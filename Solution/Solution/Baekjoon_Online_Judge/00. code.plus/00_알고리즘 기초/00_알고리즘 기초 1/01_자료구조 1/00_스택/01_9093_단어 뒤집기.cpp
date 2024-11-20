#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumTestCase{};
	string strInput{};
	stack<char> stkBuff{};

	cin >> iNumTestCase;

	cin.ignore();

	while (iNumTestCase--)
	{
		getline(cin, strInput);
		strInput += '\n';

		for (const char& ch : strInput)
		{
			if (' ' == ch || '\n' == ch)
			{
				while (!stkBuff.empty())
				{
					cout << stkBuff.top();
					stkBuff.pop();
				}
				cout << ch;
			}
			else
				stkBuff.push(ch);
		}
	}

	return 0;
}