#include <iostream>
#include <string>
#include <array>

using namespace std;

enum TYPE_CH { CH_LOWER, CH_UPPER, CH_DIGIT, CH_SPACE, CH_END };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput{};

	while (getline(cin, strInput))
	{
		array<int, TYPE_CH::CH_END> arrNumCharType{};

		for (const char& ch : strInput)
		{
			if ('A' <= ch && 'Z' >= ch)
				++arrNumCharType[TYPE_CH::CH_UPPER];
			else if ('a' <= ch && 'z' >= ch)
				++arrNumCharType[TYPE_CH::CH_LOWER];
			else if (' ' == ch)
				++arrNumCharType[TYPE_CH::CH_SPACE];
			else
				++arrNumCharType[TYPE_CH::CH_DIGIT];
		}

		for (const int& iNumCharType : arrNumCharType)
			cout << iNumCharType << ' ';
		
		cout << '\n';
	}

	return 0;
}