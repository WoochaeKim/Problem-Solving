#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long llInputN, llInputM;

	cin >> llInputN >> llInputM;
	cout << ((0 > llInputN - llInputM) ? (llInputN - llInputM) * -1 : llInputN - llInputM);

	return 0;
}