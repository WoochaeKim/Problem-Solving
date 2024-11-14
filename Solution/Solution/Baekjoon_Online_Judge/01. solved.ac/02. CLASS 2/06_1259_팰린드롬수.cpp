#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput{};

	while (true)
	{
		cin >> strInput;

		if (1 == strInput.size())
		{
			if ('0' == strInput.front())
				break;
			else
				cout << "yes" << '\n';
		}
		else
		{
			bool bIsPalindrome{true};
			int iRightIdx{ static_cast<int>(strInput.size()) - 1 };

			for (int iLeftIdx{}; iLeftIdx < iRightIdx; ++iLeftIdx, --iRightIdx)
			{
				if (strInput[iLeftIdx] != strInput[iRightIdx])
				{
					bIsPalindrome = false;
					break;
				}
			}

			cout << (bIsPalindrome ? "yes" : "no") << '\n';
		}
	}

	return 0;
}