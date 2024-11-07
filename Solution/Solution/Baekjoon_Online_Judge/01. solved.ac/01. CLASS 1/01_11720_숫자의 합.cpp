#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCast{}, iSum{};
	string strInput{};

	cin >> iTestCast >> strInput;

	for (const char ch : strInput)
		iSum += (ch - '0');

	cout << iSum;

	return 0;
}