#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iYear{};
	cin >> iYear;

	cout << ((0 == iYear % 4) ? ((0 == iYear % 400) || (0 != iYear % 100) ? 1 : 0) : 0);

	return 0;
}