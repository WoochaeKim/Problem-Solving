#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int iNumAllAlph{ 26 };
	const int iNumHalfAlph{ 13 };

	string strInput{};
	getline(cin, strInput);

	for (const char& chAlph : strInput)
	{
		if (isupper(chAlph))
			cout << static_cast<char>('A' + (chAlph - 'A' + iNumHalfAlph) % iNumAllAlph);
		else if (islower(chAlph))
			cout << static_cast<char>('a' + (chAlph - 'a' + iNumHalfAlph) % iNumAllAlph);
		else
			cout << chAlph;
	}

	return 0;
}