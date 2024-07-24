#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{};
	string strInput{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		int iSum{}, iPartSum{};

		cin >> strInput;

		for (const auto& chElem : strInput)
		{
			iPartSum = (('O' == chElem) ? iPartSum += 1 : 0);
			iSum += iPartSum;
		}

		cout << iSum << '\n';
	}

	return 0;
}