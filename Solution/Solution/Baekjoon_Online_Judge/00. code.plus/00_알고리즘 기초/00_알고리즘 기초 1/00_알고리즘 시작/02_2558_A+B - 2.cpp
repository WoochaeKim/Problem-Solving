#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputNumA, iInputNumB;
	cin >> iInputNumA;
	cin >> iInputNumB;

	cout << iInputNumA + iInputNumB;

	return 0;
}