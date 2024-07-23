#include <iostream>

#define TEN_PRIME_5 5

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumN, iSum{};

	cin >> iNumN;

	for (int iDivisor = TEN_PRIME_5; iDivisor <= iNumN; iDivisor *= TEN_PRIME_5)
		iSum += iNumN / iDivisor;

	cout << iSum;

	return 0;
}