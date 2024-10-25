#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput{};
	int iNumCmd{};
	char chCmd{}, chInput{};
	stack<char> stkLeftBuff{}, stkRightBuff{};

	cin >> strInput;
	cin >> iNumCmd;

	for (const char& ch : strInput)
		stkLeftBuff.push(ch);

	while (iNumCmd--)
	{
		cin >> chCmd;

		switch (chCmd)
		{
			case 'L':
			if (!stkLeftBuff.empty())
			{
				stkRightBuff.push(stkLeftBuff.top());
				stkLeftBuff.pop();
			}
			break;

			case 'D':
				if (!stkRightBuff.empty())
				{
					stkLeftBuff.push(stkRightBuff.top());
					stkRightBuff.pop();
				}
				break;

			case 'B':
				if (!stkLeftBuff.empty())
					stkLeftBuff.pop();
				break;

			case 'P':
				cin >> chInput;
				stkLeftBuff.push(chInput);
				break;
		}
	}

	while (!stkLeftBuff.empty())
	{
		stkRightBuff.push(stkLeftBuff.top());
		stkLeftBuff.pop();
	}

	while (!stkRightBuff.empty())
	{
		cout << stkRightBuff.top();
		stkRightBuff.pop();
	}

	return 0;
}