#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{};
	string strInput{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		int iScore{}, iTotalScore{};

		cin >> strInput;
		
		for (const char& ch : strInput)
			'X' == ch ? iScore = 0 : iTotalScore += ++iScore;

		cout << iTotalScore << '\n';
	}

	return 0;
}