#include <iostream>

using namespace std;

long long DifferenceOfSquares(const long long& _iLeft, const long long& _iRight)
{
	return (_iLeft + _iRight) * (_iLeft - _iRight);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long llInputA, llInputB;

	cin >> llInputA >> llInputB;

	cout << DifferenceOfSquares(llInputA, llInputB);

	return 0;
}