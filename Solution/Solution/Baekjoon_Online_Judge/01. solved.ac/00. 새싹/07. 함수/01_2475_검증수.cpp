#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iSum{}, iCntLoop{5};

	while (iCntLoop--)
	{
		cin >> iNumInput;
		iSum += iNumInput * iNumInput;
	}

	cout << iSum % 10;

	return 0;
}