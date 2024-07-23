#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputT, iInputA, iInputB;

	cin >> iInputT;

	while (iInputT--)
	{
		cin >> iInputA >> iInputB;
		cout << iInputA + iInputB << '\n';
	}

	return 0;
}