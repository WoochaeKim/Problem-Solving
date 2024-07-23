#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputA, iInputB;

	cin >> iInputA >> iInputB;
	cout << ((iInputA > iInputB) ? ">" : ((iInputA < iInputB) ? "<" : "=="));

	return 0;
}