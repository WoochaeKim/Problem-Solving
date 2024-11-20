#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int SPECIAL{ 2 };
	int iWidth{};
	cin >> iWidth;

	vector<int> vecTabul(iWidth + 1);
	vecTabul.front() = 1;

	if (0 != iWidth && 0 == iWidth % 2)
	{
		vecTabul[2] = 3;

		for (int iCntIdx{ 4 }; iCntIdx <= iWidth; iCntIdx += 2)
		{
			vecTabul[iCntIdx] += vecTabul[iCntIdx - 2] * vecTabul[2];

			for (int iCntIdx2{ iCntIdx - 4 }; iCntIdx2 >= 0; --iCntIdx2)
				vecTabul[iCntIdx] += vecTabul[iCntIdx2] * SPECIAL;
		}
	}

	cout << vecTabul[iWidth];

	return 0;
}