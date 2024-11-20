#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	array<int, 'z' - 'a' + 1> arrBuff{};

	string strInput{};
	getline(cin, strInput);

	for (const char& chAlph : strInput)
		++arrBuff[chAlph - 'a'];

	for (const int& iNumchAlph : arrBuff)
		cout << iNumchAlph << ' ';

	return 0;
}