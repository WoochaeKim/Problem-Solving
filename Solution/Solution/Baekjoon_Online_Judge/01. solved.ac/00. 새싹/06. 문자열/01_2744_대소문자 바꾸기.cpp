#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int iInterval = 'a' - 'A';
	string strInput{};

	cin >> strInput;

	for (auto& chElem : strInput)
		chElem = ('a' <= chElem) ? (chElem - iInterval) : (chElem + iInterval);

	cout << strInput;

	return 0;
}