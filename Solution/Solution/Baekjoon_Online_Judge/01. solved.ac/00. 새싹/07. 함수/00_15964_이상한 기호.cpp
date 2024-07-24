#include <iostream>

using namespace std;

int DifferenceOfSquares(const int& _iLeft, const int& _iRight)
{
	return (_iLeft + _iRight) * (_iLeft - _iRight);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputA, iInputB;

	cin >> iInputA >> iInputB;

	cout << DifferenceOfSquares(iInputA, iInputB);

	return 0;
}