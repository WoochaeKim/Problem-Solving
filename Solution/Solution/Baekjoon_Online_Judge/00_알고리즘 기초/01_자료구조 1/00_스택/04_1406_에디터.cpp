#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput;
	int iNumT;
	char chInput;
	stack<char> stkLeftBuff;
	stack<char> stkRightBuff;

	cin >> strInput;
	for (char ch : strInput)
		stkLeftBuff.push(ch);
	
	cin >> iNumT;

	while (iNumT--)
	{
		cin >> chInput;

		switch (chInput)
		{
		case 'L':
			if (stkLeftBuff.empty())
				break;
			stkRightBuff.push(stkLeftBuff.top());
			stkLeftBuff.pop();
			break;

		case 'D':
			if (stkRightBuff.empty())
				break;
			stkLeftBuff.push(stkRightBuff.top());
			stkRightBuff.pop();
			break;

		case 'B':
			if (stkLeftBuff.empty())
				break;
			stkLeftBuff.pop();
			break;

		case 'P':
			cin >> chInput;
			stkLeftBuff.push(chInput);
			break;
		}
	}

	while (false == stkLeftBuff.empty())
	{
		stkRightBuff.push(stkLeftBuff.top());
		stkLeftBuff.pop();
	}

	while (false == stkRightBuff.empty())
	{
		cout << stkRightBuff.top();
		stkRightBuff.pop();
	}

	cout << '\n';

	return 0;
}