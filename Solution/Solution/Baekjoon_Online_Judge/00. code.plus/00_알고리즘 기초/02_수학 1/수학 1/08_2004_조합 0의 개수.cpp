#include <iostream>

#define TEN_PRIME_2 2
#define TEN_PRIME_5 5

using namespace std;

int GetExponent(const int& _iNum, const int& _iPrime)
{
	int iSum{};
	for (long long iDivisor = _iPrime; iDivisor <= _iNum; iDivisor *= _iPrime)
		iSum += _iNum / static_cast<int>(iDivisor);
	return iSum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumN, iNumM;

	cin >> iNumN >> iNumM;

	int iPrimeExp_2 = GetExponent(iNumN, TEN_PRIME_2) - (GetExponent(iNumN - iNumM, TEN_PRIME_2) + GetExponent(iNumM, TEN_PRIME_2));
	int iPrimeExp_5 = GetExponent(iNumN, TEN_PRIME_5) - (GetExponent(iNumN - iNumM, TEN_PRIME_5) + GetExponent(iNumM, TEN_PRIME_5));

	cout << ((iPrimeExp_2 < iPrimeExp_5) ? iPrimeExp_2 : iPrimeExp_5);

	return 0;
}