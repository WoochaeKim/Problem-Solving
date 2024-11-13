#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	enum TYPE_SIDE { BASE, HIGHT, HYPOT, END };

	array<int, TYPE_SIDE::END> arrSides{};
	

	while (true)
	{
		int iSumSide{};

		for (int& iSide : arrSides)
		{
			cin >> iSide;
			iSumSide += iSide;
			iSide *= iSide;
		}
		sort(arrSides.begin(), arrSides.end());

		if (0 == iSumSide)
			break;

		cout << ((arrSides[HYPOT] == arrSides[BASE] + arrSides[HIGHT]) ? "right" : "wrong") << '\n';

	}

	return 0;
}