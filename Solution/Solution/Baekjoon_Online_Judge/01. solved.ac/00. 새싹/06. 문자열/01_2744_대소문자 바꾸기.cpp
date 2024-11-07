#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int OFFSET{ 'a' - 'A' };
	string strInput{};
	cin >> strInput;

	for (const char& ch : strInput)
		cout << static_cast<char>('a' > ch ? ch + OFFSET : ch - OFFSET);

	return 0;
}