#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long llInputA, llInputB, llInputC;
	cin >> llInputA >> llInputB >> llInputC;
	cout << llInputA + llInputB + llInputC;

	return 0;
}