#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{};
	cin >> iNumInput;

	for (int iCntNum{ 1 }; iCntNum <= iNumInput; ++iCntNum)
		cout << iCntNum << '\n';

	return 0;
}