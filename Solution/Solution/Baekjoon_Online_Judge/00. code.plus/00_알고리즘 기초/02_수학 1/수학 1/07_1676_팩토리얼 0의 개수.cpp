#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int FIVE{ 5 };
	int iNumInput{}, iNumZeroDigit{};

	cin >> iNumInput;

	for (int iCntFiveMul = FIVE; iCntFiveMul <= iNumInput; iCntFiveMul *= FIVE)
		iNumZeroDigit += iNumInput / iCntFiveMul;

	cout << iNumZeroDigit;

	return 0;
}