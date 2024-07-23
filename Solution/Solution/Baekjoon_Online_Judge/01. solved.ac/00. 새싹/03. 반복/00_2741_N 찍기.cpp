#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputN{};

	cin >> iInputN;

	for (int iidx = 1; iidx <= iInputN; iidx++)
		cout << iidx << '\n';

	return 0;
}