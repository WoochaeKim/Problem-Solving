#include <iostream>

#define LIMIT_IDX 5

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInput, iSum{}, iLoop{ LIMIT_IDX };

	while (iLoop--)
	{
		cin >> iInput;
		iSum += iInput * iInput;
	}

	cout << iSum % 10;

	return 0;
}