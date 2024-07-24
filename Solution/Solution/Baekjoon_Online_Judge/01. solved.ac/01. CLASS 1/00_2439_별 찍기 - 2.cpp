#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iLimitLoop;

	cin >> iLimitLoop;

	for (int iRowLoop = 1; iRowLoop <= iLimitLoop; iRowLoop++)
	{
		for (int iColLoop = iLimitLoop; iColLoop > 0; iColLoop--)
			cout << (iRowLoop < iColLoop ? ' ' : '*');

		cout << '\n';
	}

	return 0;
}