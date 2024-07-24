#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase, iInputLoop, iIdxLoop;
	string strInput{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iInputLoop >> strInput;

		for (const auto& chElem : strInput)
		{
			iIdxLoop = iInputLoop;
			while (iIdxLoop--)
				cout << chElem;
		}

		cout << '\n';
	}

	return 0;
}