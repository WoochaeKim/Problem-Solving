#include <iostream>
#include <cmath>
#include <array>

#define LIMIT_IDX 8

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	array<int, LIMIT_IDX> arrDigitBuff;
	bool bIsMixed{};

	for (auto& iDigit : arrDigitBuff)
		cin >> iDigit;

	for (int iCnt = 0; iCnt < LIMIT_IDX - 1; iCnt++)
	{
		if (1 != abs(arrDigitBuff[iCnt] - arrDigitBuff[iCnt + 1]))
		{
			bIsMixed = true;
			break;
		}
	}

	if (bIsMixed)
		cout << "mixed";
	else
		cout << ((0 < arrDigitBuff.back() - arrDigitBuff.front()) ? "ascending" : "descending");

	return 0;
}