#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputN{};

	cin >> iInputN;

	for (int iIdx = 1; iIdx <= iInputN; iIdx++)
		cout << iIdx << '\n';

	return 0;
}