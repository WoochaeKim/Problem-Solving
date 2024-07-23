#include <iostream>

using namespace std;

int GetFactorial(int _iNum)
{
	if (0 == _iNum)
		return 1;

	return _iNum * GetFactorial(_iNum - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumN{};

	cin >> iNumN;

	cout << GetFactorial(iNumN);

	return 0;
}