#include <iostream>
#include <array>
#include <string>

#define LIMIT_IDX 10

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputA, iInputB, iInputC;
	array<int, LIMIT_IDX> arrDigitBuff{};
	string strSequence{};

	cin >> iInputA >> iInputB >> iInputC;

	strSequence = to_string(iInputA * iInputB * iInputC);

	for (const auto& chDigit : strSequence)
		arrDigitBuff[chDigit - '0'] += 1;

	for (const auto& iNumDigit : arrDigitBuff)
		cout << iNumDigit << '\n';

	return 0;
}