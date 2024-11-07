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
		cin >> strInput;
		cout << strInput.front() << strInput.back() << '\n';
	}

	return 0;
}