#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumScore{};
	cin >> iNumScore;

	if (90 <= iNumScore)
		cout << 'A';
	else if (80 <= iNumScore)
		cout << 'B';
	else if (70 <= iNumScore)
		cout << 'C';
	else if (60 <= iNumScore)
		cout << 'D';
	else
		cout << 'F';

	return 0;
}