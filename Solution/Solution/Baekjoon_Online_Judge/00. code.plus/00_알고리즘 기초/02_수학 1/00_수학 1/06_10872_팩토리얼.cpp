#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{}, iResult{1};

	cin >> iNumInput;
	iNumInput += 1;

	while (--iNumInput)
		iResult *= iNumInput;

	cout << iResult;

	return 0;
}