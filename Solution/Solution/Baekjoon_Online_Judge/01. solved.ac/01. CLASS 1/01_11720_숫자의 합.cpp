#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iLoop, iSum{};
	string strInput{};

	cin >> iLoop;
	cin >> strInput;

	for (const auto& chDigit : strInput)
		iSum += static_cast<int>(chDigit - '0');

	cout << iSum;

	return 0;
}