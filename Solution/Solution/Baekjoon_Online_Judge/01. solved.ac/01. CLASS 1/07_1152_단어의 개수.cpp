#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumWord{};
	string strInput{};

	getline(cin, strInput);

	if (' ' == strInput.front())
		--iNumWord;
	if (' ' == strInput.back())
		--iNumWord;

	for (const char& ch : strInput)
	{
		if (' ' == ch)
			++iNumWord;
	}

	cout << ++iNumWord;

	return 0;
}