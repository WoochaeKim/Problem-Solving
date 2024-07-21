#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput;
	array<int, 26> arrBuff{};

	cin >> strInput;

	for (char chElem : strInput)
		arrBuff[chElem - 'a'] += 1;

	for (int iElem : arrBuff)
		cout << iElem << ' ';

	return 0;
}