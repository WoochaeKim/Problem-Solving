#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputA, iInputB;

	cin >> iInputA >> iInputB;
	cout << fixed << setprecision(10) << static_cast<double>(iInputA) / static_cast<double>(iInputB);

	return 0;
}