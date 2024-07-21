// Notes
// 자료형 범위를 항상 유의할 것!

#include <iostream>
#include <cmath>

#define INPUT_LIMIT 4
#define BASE 10

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iUpper, iLower;
	int iCntLoop{ INPUT_LIMIT / 2 };
	long long iSum{};

	while (iCntLoop--)
	{
		cin >> iUpper >> iLower;
		iSum += iUpper * static_cast<long long>(pow(BASE, floor(log10(iLower)) + 1)) + iLower;
	}

	cout << iSum;

	return 0;
}