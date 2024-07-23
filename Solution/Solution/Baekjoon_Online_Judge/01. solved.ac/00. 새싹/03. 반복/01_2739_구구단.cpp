#include <iostream>

#define LIMIT_IDX 9

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputN{};

	cin >> iInputN;

	for (int iIdx = 1; iIdx <= LIMIT_IDX; iIdx++)
		cout << iInputN << " * " << iIdx << " = " << iInputN * iIdx << '\n';

	return 0;
}