#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long llNumInputA{}, llNumInputB{}, llNumInputC{};
	cin >> llNumInputA >> llNumInputB >> llNumInputC;

	cout << llNumInputA + llNumInputB + llNumInputC;

	return 0;
}