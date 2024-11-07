#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	double dNumInputA{}, dNumInputB{};
	cin >> dNumInputA >> dNumInputB;

	cout << fixed << setprecision(10) << dNumInputA / dNumInputB;

	return 0;
}