#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iCoordX{}, iCoordY{};
	cin >> iCoordX >> iCoordY;

	cout << ((0 < iCoordX * iCoordY) ? ((0 < iCoordX) ? 1 : 3) : ((0 < iCoordX) ? 4 : 2));

	return 0;
}