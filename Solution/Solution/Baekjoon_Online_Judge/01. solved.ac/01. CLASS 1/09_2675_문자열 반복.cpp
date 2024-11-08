#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iMaxLoop{};
	string strInput{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iMaxLoop >> strInput;
		string strOutput;

		for (const char& ch : strInput)
		{
			for (int iCntLoop{}; iCntLoop < iMaxLoop; ++iCntLoop)
				strOutput += ch;
		}

		cout << strOutput << '\n';
	}

	return 0;
}