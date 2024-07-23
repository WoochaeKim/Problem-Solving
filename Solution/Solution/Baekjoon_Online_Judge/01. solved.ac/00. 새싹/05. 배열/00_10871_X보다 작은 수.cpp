#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iLoop, iPivot, iInput;

	cin >> iLoop >> iPivot;

	while (iLoop--)
	{
		cin >> iInput;

		if (iPivot > iInput)
			cout << iInput << ' ';
	}

	return 0;
}