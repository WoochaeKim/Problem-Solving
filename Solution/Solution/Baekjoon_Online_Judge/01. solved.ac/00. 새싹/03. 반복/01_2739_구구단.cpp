#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{};
	cin >> iNumInput;

	for (int iCntMul{ 1 }; iCntMul < 10; ++iCntMul)
		cout << iNumInput << " * " << iCntMul << " = " << iNumInput * iCntMul << '\n';

	return 0;
}