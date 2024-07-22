#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumA, iNumB, iNumC;

	cin >> iNumA >> iNumB >> iNumC;

	cout << (iNumA + iNumB) % iNumC << '\n';
	cout << ((iNumA % iNumC) + (iNumB % iNumC)) % iNumC << '\n';
	cout << (iNumA * iNumB) % iNumC << '\n';
	cout << ((iNumA % iNumC) * (iNumB % iNumC)) % iNumC;

	return 0;
}