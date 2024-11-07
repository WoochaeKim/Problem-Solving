#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumLine{};
	cin >> iNumLine;

	for (int iCntLine{ 1 }; iCntLine <= iNumLine; ++iCntLine)
	{
		for (int iCntStar{ 1 }; iCntStar <= iCntLine; ++iCntStar)
			cout << '*';

		cout << '\n';
	}

	return 0;
}