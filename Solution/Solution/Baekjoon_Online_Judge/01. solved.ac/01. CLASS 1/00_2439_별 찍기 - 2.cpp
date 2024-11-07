#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumLine{};
	cin >> iNumLine;

	for (int iCntRow{ 1 }; iCntRow <= iNumLine; ++iCntRow)
	{
		for (int iCntCol{ iNumLine }; iCntCol > 0; --iCntCol)
			cout << (iCntRow < iCntCol ? ' ' : '*');

		cout << '\n';
	}

	return 0;
}