#include <iostream>

using namespace std;

int GCD(int _iNumA, int _iNumB)
{
	if (0 == _iNumB)
		return _iNumA;

	return GCD(_iNumB, _iNumA % _iNumB);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumA, iNumB, iGCD;

	cin >> iNumA >> iNumB;

	iGCD = GCD(iNumB, iNumA % iNumB);

	cout << iGCD << '\n' << (iNumA * iNumB) / iGCD;

	return 0;
}