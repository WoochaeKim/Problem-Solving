#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumLoop{ 4 };
	string strInput{};

	while (--iNumLoop)
	{
		cin >> strInput;

		if ('0' <= strInput.front() && '9' >= strInput.front())
		{
			int iNum{ stoi(strInput) + iNumLoop };

			if (0 == iNum % 3 && 0 == iNum % 5)
				cout << "FizzBuzz";
			else if (0 == iNum % 3 && 0 != iNum % 5)
				cout << "Fizz";
			else if (0 != iNum % 3 && 0 == iNum % 5)
				cout << "Buzz";
			else
				cout << iNum;

			break;
		}
	}

	return 0;
}