#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSum{};
	string strInput{};

	getline(cin, strInput);

	for (const auto& chElem : strInput)
		iSum += ((' ' == chElem) ? 1 : 0);

	iSum += (' ' != strInput.front()) ? 1 : 0;
	iSum += (' ' == strInput.back()) ? -1 : 0;

	cout << iSum;

	return 0;
}